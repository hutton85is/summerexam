#include <iostream>
#include "highscore.h"
#include "highscorebst.h"

using namespace std;

void testInsertOnly() {

    cout << endl << "INSERT TEST" << endl;

    HighScoreBST highScoreTable;

    highScoreTable.addScore(HighScore("player03", 97, 23412));
    highScoreTable.addScore(HighScore("player01", 111, 2343));
    highScoreTable.addScore(HighScore("player02", 100, 241123));
    highScoreTable.addScore(HighScore("player04", 17, 4));
    highScoreTable.addScore(HighScore("player05", 108, 23434));
    highScoreTable.addScore(HighScore("player06", 100, 12));
    highScoreTable.addScore(HighScore("player07", 67, 23));
    highScoreTable.addScore(HighScore("player08", 98, 24));

    highScoreTable.printHighScoresHighestFirst();

    highScoreTable.addScore(HighScore("player09", 21, 232));
    highScoreTable.addScore(HighScore("player10", 117, 253));
    highScoreTable.addScore(HighScore("player11", 15, 2423));
    highScoreTable.addScore(HighScore("player12", 178, 487));
    highScoreTable.addScore(HighScore("player13", 109, 2434));
    highScoreTable.addScore(HighScore("player14", 112, 2344));
    highScoreTable.addScore(HighScore("player15", 167, 273));
    highScoreTable.addScore(HighScore("player16", 58, 234));

    highScoreTable.printHighScoresHighestFirst();
}

void testFindOnly() {

    cout << endl << "FIND TEST" << endl;

    HighScoreBST highScoreTable(BUILD_HARDCODED_TREE);

    highScoreTable.printHighScoresHighestFirst();

    cout << endl;

    cout << "highScoreTable.find(100)" << endl;
    try {
        cout << highScoreTable.find(100) << endl;
    }
    catch(NotFoundException) {
        cout << "Caught NotFoundException!" << endl;
    }

    cout << "highScoreTable.find(97)" << endl;
    try {
        cout << highScoreTable.find(97) << endl;
    }
    catch(NotFoundException) {
        cout << "Caught NotFoundException!" << endl;
    }

    cout << "highScoreTable.find(111)" << endl;
    try {
        cout << highScoreTable.find(111) << endl;
    }
    catch(NotFoundException) {
        cout << "Caught NotFoundException!" << endl;
    }

    cout << "highScoreTable.find(67)" << endl;
    try {
        cout << highScoreTable.find(67) << endl;
    }
    catch(NotFoundException) {
        cout << "Caught NotFoundException!" << endl;
    }

    cout << "highScoreTable.find(117)" << endl;
    try {
        cout << highScoreTable.find(117) << endl;
    }
    catch(NotFoundException) {
        cout << "Caught NotFoundException!" << endl;
    }

    cout << "highScoreTable.find(21)" << endl;
    try {
        cout << highScoreTable.find(21) << endl;
    }
    catch(NotFoundException) {
        cout << "Caught NotFoundException!" << endl;
    }

    cout << "highScoreTable.find(98)" << endl;
    try {
        cout << highScoreTable.find(98) << endl;
    }
    catch(NotFoundException) {
        cout << "Caught NotFoundException!" << endl;
    }

    cout << "highScoreTable.find(77)" << endl;
    try {
        cout << highScoreTable.find(77) << endl;
    }
    catch(NotFoundException) {
        cout << "Caught NotFoundException!" << endl;
    }

}

void testInsertAndFind() {

    cout << endl << "INSERT AND FIND TEST" << endl;

    HighScoreBST highScoreTable;

    highScoreTable.addScore(HighScore("player03", 97, 23412));
    highScoreTable.addScore(HighScore("player01", 111, 2343));
    highScoreTable.addScore(HighScore("player02", 100, 241123));
    highScoreTable.addScore(HighScore("player04", 17, 4));
    highScoreTable.addScore(HighScore("player05", 108, 23434));
    highScoreTable.addScore(HighScore("player06", 100, 12));
    highScoreTable.addScore(HighScore("player07", 67, 23));
    highScoreTable.addScore(HighScore("player08", 98, 24));

    highScoreTable.printHighScoresHighestFirst();

    cout << "highScoreTable.find(100)" << endl;
    try {
        cout << highScoreTable.find(100) << endl;
    }
    catch(NotFoundException) {
        cout << "Caught NotFoundException!" << endl;
    }

    cout << "highScoreTable.find(97)" << endl;
    try {
        cout << highScoreTable.find(97) << endl;
    }
    catch(NotFoundException) {
        cout << "Caught NotFoundException!" << endl;
    }

    cout << "highScoreTable.find(111)" << endl;
    try {
        cout << highScoreTable.find(111) << endl;
    }
    catch(NotFoundException) {
        cout << "Caught NotFoundException!" << endl;
    }

    cout << "highScoreTable.find(67)" << endl;
    try {
        cout << highScoreTable.find(67) << endl;
    }
    catch(NotFoundException) {
        cout << "Caught NotFoundException!" << endl;
    }

    cout << "highScoreTable.find(117)" << endl;
    try {
        cout << highScoreTable.find(117) << endl;
    }
    catch(NotFoundException) {
        cout << "Caught NotFoundException!" << endl;
    }

    cout << "highScoreTable.find(21)" << endl;
    try {
        cout << highScoreTable.find(21) << endl;
    }
    catch(NotFoundException) {
        cout << "Caught NotFoundException!" << endl;
    }

    cout << "highScoreTable.find(98)" << endl;
    try {
        cout << highScoreTable.find(98) << endl;
    }
    catch(NotFoundException) {
        cout << "Caught NotFoundException!" << endl;
    }

    cout << "highScoreTable.find(77)" << endl;
    try {
        cout << highScoreTable.find(77) << endl;
    }
    catch(NotFoundException) {
        cout << "Caught NotFoundException!" << endl;
    }

    highScoreTable.addScore(HighScore("player09", 21, 232));
    highScoreTable.addScore(HighScore("player10", 117, 253));
    highScoreTable.addScore(HighScore("player11", 15, 2423));
    highScoreTable.addScore(HighScore("player12", 178, 487));
    highScoreTable.addScore(HighScore("player13", 109, 2434));
    highScoreTable.addScore(HighScore("player14", 112, 2344));
    highScoreTable.addScore(HighScore("player15", 167, 273));
    highScoreTable.addScore(HighScore("player16", 58, 234));

    highScoreTable.printHighScoresHighestFirst();

    cout << "highScoreTable.find(100)" << endl;
    try {
        cout << highScoreTable.find(100) << endl;
    }
    catch(NotFoundException) {
        cout << "Caught NotFoundException!" << endl;
    }

    cout << "highScoreTable.find(97)" << endl;
    try {
        cout << highScoreTable.find(97) << endl;
    }
    catch(NotFoundException) {
        cout << "Caught NotFoundException!" << endl;
    }

    cout << "highScoreTable.find(111)" << endl;
    try {
        cout << highScoreTable.find(111) << endl;
    }
    catch(NotFoundException) {
        cout << "Caught NotFoundException!" << endl;
    }

    cout << "highScoreTable.find(67)" << endl;
    try {
        cout << highScoreTable.find(67) << endl;
    }
    catch(NotFoundException) {
        cout << "Caught NotFoundException!" << endl;
    }

    cout << "highScoreTable.find(117)" << endl;
    try {
        cout << highScoreTable.find(117) << endl;
    }
    catch(NotFoundException) {
        cout << "Caught NotFoundException!" << endl;
    }

    cout << "highScoreTable.find(21)" << endl;
    try {
        cout << highScoreTable.find(21) << endl;
    }
    catch(NotFoundException) {
        cout << "Caught NotFoundException!" << endl;
    }

    cout << "highScoreTable.find(98)" << endl;
    try {
        cout << highScoreTable.find(98) << endl;
    }
    catch(NotFoundException) {
        cout << "Caught NotFoundException!" << endl;
    }

    cout << "highScoreTable.find(77)" << endl;
    try {
        cout << highScoreTable.find(77) << endl;
    }
    catch(NotFoundException) {
        cout << "Caught NotFoundException!" << endl;
    }

}

int main() {

    testInsertOnly();
    testFindOnly();
    testInsertAndFind();

    return 0;
}
