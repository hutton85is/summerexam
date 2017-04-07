#include <iostream>
#include <sstream>
#include "StringList.h"

using namespace std;

void test(){
    StringList lis;

    stringstream s;

    try{

        /****TEST ZERO****/
        if (lis.curr_pos() != 0 || lis.length() != 0){
            throw string("FAILURE AT TEST ZERO");
        }

        /****TEST ONE*****/
        lis.append("a");
        lis.append("b");
        lis.append("c");
        lis.append("d");
        s << lis;
        if (s.str() != "a b c d " || lis.curr_pos() != 0 || lis.get_value() != "a" || lis.length() != 4){
            throw string("FAILURE AT TEST ONE");
        }

        /****TEST TWO****/
        lis.move_to_pos(0);
        if (lis.curr_pos() != 0 || lis.get_value() != "a"){
            throw string("FAILURE AT TEST TWO");
        }

    }
    catch(string e){
        cout << e << endl;
    }

    cout << endl;
    cout << "****************" << endl;
    cout << "TESTING FINISHED" << endl;
}

int main() {

    test();

//    StringList lis;
//
//    cout << "Testing insert()" << endl;
//
//    lis.append("bxp");
//    lis.append("fic");
//    lis.append("wet");
//    lis.append("gor");
//    cout << lis << endl;
//    cout << "expected output: " << "bxp fic wet gor" << endl;
//    cout << "your output:     " << lis << endl;
//
//    lis.move_to_pos(2);
//    lis.insert("pod");
//    cout << "expected output: " << "bxp fic pod wet gor" << endl;
//    cout << "your output:     " << lis << endl;
//
//    lis.move_to_pos(2);
//    lis.insert("sed");
//    cout << "expected output: " << "bxp fic sed pod wet gor" << endl;
//    cout << "your output:     " << lis << endl;
//
//    lis.move_to_start();
//    lis.insert("doc");
//    cout << "expected output: " << "doc bxp fic sed pod wet gor" << endl;
//    cout << "your output:     " << lis << endl;
//
//    lis.move_to_end();
//    lis.insert("cal");
//    cout << "expected output: " << "doc bxp fic sed pod wet gor cal" << endl;
//    cout << "your output:     " << lis << endl;
//
//    cout << endl;
//    cout << "Testing remove()" << endl;
//    lis.clear();
//    lis.append("doc");
//    lis.append("bxp");
//    lis.append("fic");
//    lis.append("sed");
//    lis.append("pod");
//    lis.append("wet");
//    lis.append("gor");
//    lis.append("cal");
//
//    cout << "expected output: " << "doc bxp fic sed pod wet gor cal" << endl;
//    cout << "your output:     " << lis << endl;
//
//
//    lis.move_to_pos(4);
//
//    cout << "expected output: " << "doc bxp fic sed wet gor cal" << endl;
//    cout << "your output:     ";
//    try{
//        lis.remove();
//        cout << lis << endl;
//    }catch(InvalidPositionException) {
//        cout << "Caught InvalidPositionException" << endl;
//    }
//
//    lis.move_to_end();
//
//    cout << "expected output: " << "Caught InvalidPositionException" << endl;
//    cout << "your output:     ";
//    try{
//        lis.remove();
//        cout << lis << endl;
//    }catch(InvalidPositionException) {
//        cout << "Caught InvalidPositionException" << endl;
//    }
//
//    lis.prev();
//
//    cout << "expected output: " << "doc bxp fic sed wet gor" << endl;
//    cout << "your output:     ";
//    try{
//        lis.remove();
//        cout << lis << endl;
//    }catch(InvalidPositionException) {
//        cout << "Caught InvalidPositionException" << endl;
//    }
//
//    lis.move_to_start();
//
//    cout << "expected output: " << "bxp fic sed wet gor" << endl;
//    cout << "your output:     ";
//    try{
//        lis.remove();
//        cout << lis << endl;
//    }catch(InvalidPositionException) {
//        cout << "Caught InvalidPositionException" << endl;
//    }
//
//    lis.move_to_pos(1);
//
//    cout << "expected output: " << "bxp sed wet gor" << endl;
//    cout << "your output:     ";
//    try{
//        lis.remove();
//        cout << lis << endl;
//    }catch(InvalidPositionException) {
//        cout << "Caught InvalidPositionException" << endl;
//    }
//
//    lis.move_to_start();
//
//    cout << "expected output: " << "sed wet gor" << endl;
//    cout << "your output:     ";
//    try{
//        lis.remove();
//        cout << lis << endl;
//    }catch(InvalidPositionException) {
//        cout << "Caught InvalidPositionException" << endl;
//    }
//
//    cout << "expected output: " << "wet gor" << endl;
//    cout << "your output:     ";
//    try{
//        lis.remove();
//        cout << lis << endl;
//    }catch(InvalidPositionException) {
//        cout << "Caught InvalidPositionException" << endl;
//    }
//
//    cout << "expected output: " << "gor" << endl;
//    cout << "your output:     ";
//    try{
//        lis.remove();
//        cout << lis << endl;
//    }catch(InvalidPositionException) {
//        cout << "Caught InvalidPositionException" << endl;
//    }
//
//    cout << "expected output: " << "" << endl;
//    cout << "your output:     ";
//    try{
//        lis.remove();
//        cout << lis << endl;
//    }catch(InvalidPositionException) {
//        cout << "Caught InvalidPositionException" << endl;
//    }
//
//    cout << "expected output: " << "Caught InvalidPositionException" << endl;
//    cout << "your output:     ";
//    try{
//        lis.remove();
//        cout << lis << endl;
//    }catch(InvalidPositionException) {
//        cout << "Caught InvalidPositionException" << endl;
//    }
//
//    cout << endl;
//    cout << "Testing insert() into empty" << endl;
//
//    lis.clear();
//    cout << "expected output: " << "" << endl;
//    cout << "your output:     " << lis << endl;
//
//    lis.insert("single");
//    cout << "expected output: " << "single" << endl;
//    cout << "your output:     " << lis << endl;

}

