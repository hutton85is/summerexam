#include <iostream>
#include <fstream>

#include "highscorebst.h"

using namespace std;

HighScoreBST::HighScoreBST() {
    root = NULL;
}

HighScoreBST::HighScoreBST(int code) {
    if(code == BUILD_HARDCODED_TREE) {
        root = new HighScoreBSTNode(HighScore("player03",97,23412),new HighScoreBSTNode(HighScore("player04",17,4),new HighScoreBSTNode(HighScore("player11",15,2423),NULL,NULL),new HighScoreBSTNode(HighScore("player07",67,23),new HighScoreBSTNode(HighScore("player09",21,232),NULL,new HighScoreBSTNode(HighScore("player16",58,234),NULL,NULL)),NULL)),new HighScoreBSTNode(HighScore("player01",111,2343),new HighScoreBSTNode(HighScore("player02",100,241123),new HighScoreBSTNode(HighScore("player08",98,24),NULL,NULL),new HighScoreBSTNode(HighScore("player05",108,23434),new HighScoreBSTNode(HighScore("player06",100,12),NULL,NULL),new HighScoreBSTNode(HighScore("player13",109,2434),NULL,NULL))),new HighScoreBSTNode(HighScore("player10",117,253),new HighScoreBSTNode(HighScore("player14",112,2344),NULL,NULL),new HighScoreBSTNode(HighScore("player12",178,487),new HighScoreBSTNode(HighScore("player15",167,273),NULL,NULL),NULL))));
    }
    else {
        root = NULL;
    }
}

HighScoreBST::~HighScoreBST()
{
 /*   while(root != NULL) {
        root = removeNode(root);
    }*/
    clearTree(root);
}

void HighScoreBST::clearTree(HighScoreBSTNode *node) {
    if(node != NULL) {
        clearTree(node->left);
        clearTree(node->right);
        delete node;
    }
}

HighScore HighScoreBST::findScore(int &scoreValue, HighScoreBSTNode* node){

    if (node == NULL){
        throw NotFoundException();
    }

    if (node->score.getScore() == scoreValue){
        return node->score;
    }
    else if (scoreValue < node->score.getScore()){
        return findScore(scoreValue, node->left);
    }
    else{
        return findScore(scoreValue, node->right);
    }
}

HighScore HighScoreBST::find(int scoreValue) {

    ///Todo: Implement
    ///You may wish to add private helper functions and that is fine
    return findScore(scoreValue, root);  //remove this line after implementing
}

HighScoreBSTNode* HighScoreBST::insertScore(HighScore& newScore, HighScoreBSTNode *node){

    if (node == NULL){
        return new HighScoreBSTNode(newScore, NULL, NULL);
    }
    if (newScore < node->score){
        node->left = insertScore(newScore, node->left);
        return node;
    }
    else {
        node->right = insertScore(newScore, node->right);
        return node;
    }
}

void HighScoreBST::addScore(HighScore score) {

    ///Todo: Implement
    ///You may wish to add private helper functions and that is fine
    root = insertScore(score, root);
}

void HighScoreBST::remove(HighScore score) {

    root = removeRecursive(score, root);
}

void HighScoreBST::printHighScoresHighestFirst() {
    cout << endl << "HIGH SCORES" << endl << endl;

    printRecursiveHighestFirst(root);
}

HighScoreBSTNode* HighScoreBST::removeRecursive(HighScore &score, HighScoreBSTNode *node) {

    if(node == NULL) {
        //The score was not found at all!
        return NULL;
    }
    if(score < node->score) {
        //Score is to the left
        node->left = removeRecursive(score, node->left);
        return node;
    }
    else if(node->score < score) {
        //Score is to the right
        node->right = removeRecursive(score, node->right);
        return node;
    }
    else {
        //This is the node, remove it and return a pointer to the node (if any) that replaces it in the tree
        return removeNode(node);
    }
}

HighScoreBSTNode* HighScoreBST::removeNode(HighScoreBSTNode *node) {

    //Node with no children, delete it
    if(node->left == NULL && node->right == NULL) {
        delete node;
        return NULL;
    }
    //Left child only, bypass
    else if(node->right == NULL) {
        HighScoreBSTNode *newLeftNode = node->left;
        delete node;
        return newLeftNode;
    }
    //Right child only, bypass
    else if(node->left == NULL) {
        HighScoreBSTNode *newRightNode = node->right;
        delete node;
        return newRightNode;
    }
    //Two children, do content switch with the leftmost node in the right subtree
    else {
        node->score = removeAndReturnScoreFromLeftMost(node->right);
        return node;
    }
}

HighScore HighScoreBST::removeAndReturnScoreFromLeftMost(HighScoreBSTNode* &node) {

    //Find the leftmost node under the node that is sent in,
    //saves its score, removes the node and the returns the score
    if(node->left == NULL) {
        HighScore score = node->score;
        node = removeNode(node);
        return score;
    }
    return removeAndReturnScoreFromLeftMost(node->left);
}

void HighScoreBST::printRecursiveHighestFirst(HighScoreBSTNode *node) {
    if(node != NULL) {
        printRecursiveHighestFirst(node->right);
        cout << node->score << endl;
        printRecursiveHighestFirst(node->left);
    }
}
