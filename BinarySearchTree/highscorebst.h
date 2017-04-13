#ifndef HIGHSCORETABLE_H
#define HIGHSCORETABLE_H

#include <set>

#include "highscorebstnode.h"

#define BUILD_HARDCODED_TREE 1

using namespace std;

class NotFoundException { };

class HighScoreBST
{
    public:
        HighScoreBST();
        HighScoreBST(int code);
        virtual ~HighScoreBST();

        ///You must implement this function
        void addScore(HighScore score);

        ///You must implement this function
        HighScore find(int scoreValue);

        void remove(HighScore score);
        void printHighScoresHighestFirst();

    private:
        HighScoreBSTNode *root;

        HighScoreBSTNode *insertScore(HighScore &newScore, HighScoreBSTNode *node);

        HighScore findScore(int& scoreValue, HighScoreBSTNode* node);

        void clearTree(HighScoreBSTNode *node);

        HighScoreBSTNode* removeRecursive(HighScore &score, HighScoreBSTNode *node);

        HighScoreBSTNode* removeNode(HighScoreBSTNode *node);

        HighScore removeAndReturnScoreFromLeftMost(HighScoreBSTNode* &node);

        void printRecursiveHighestFirst(HighScoreBSTNode *node);
};

#endif // HIGHSCORETABLE_H
