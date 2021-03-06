#include <iostream>
#include "IntVector.h"

using namespace std;

void testPushBack() {

    IntVector vec1;

    cout << "Expected output:" << "" << endl;
    cout << "Your output:    " << vec1 << endl;

    vec1.push_back(5);
    cout << "vec1.push_back(5);" << endl;
    cout << "Expected output:" << "5 " << endl;
    cout << "Your output:    " << vec1 << endl;

    vec1.push_back(8);
    cout << "vec1.push_back(8);" << endl;
    cout << "Expected output:" << "5 8 " << endl;
    cout << "Your output:    " << vec1 << endl;

    vec1.push_back(2);
    cout << "vec1.push_back(2);" << endl;
    cout << "Expected output:" << "5 8 2 " << endl;
    cout << "Your output:    " << vec1 << endl;

    vec1.push_back(3);
    cout << "vec1.push_back(3);" << endl;
    cout << "Expected output:" << "5 8 2 3 " << endl;
    cout << "Your output:    " << vec1 << endl;

    vec1.push_back(7);
    cout << "vec1.push_back(7);" << endl;
    cout << "Expected output:" << "5 8 2 3 7 " << endl;
    cout << "Your output:    " << vec1 << endl;

    vec1.push_back(4);
    cout << "vec1.push_back(4);" << endl;
    cout << "Expected output:" << "5 8 2 3 7 4 " << endl;
    cout << "Your output:    " << vec1 << endl;
}

void testInsert() {

    IntVector vec2(10, 0);

    cout << "Expected output:" << "0 0 0 0 0 0 0 0 0 0 " << endl;
    cout << "Your output:    " << vec2 << endl;

    cout << "vec.insert(5, 4);" << endl;
    cout << "Expected output:" << "0 0 0 0 0 4 0 0 0 0 0 " << endl;
    cout << "Your output:    ";
    try
    {
        vec2.insert(5, 4);
        cout << vec2 << endl;
    }
    catch (IndexOutOfRangeException)
    {
        cout << "Caught IndexOutOfRangeException!" << endl;
    }

    cout << "vec.insert(13, 4);" << endl;
    cout << "Expected output:" << "Caught IndexOutOfRangeException!" << endl;
    cout << "Your output:    ";
    try
    {
        vec2.insert(13, 4);
        cout << vec2 << endl;
    }
    catch (IndexOutOfRangeException)
    {
        cout << "Caught IndexOutOfRangeException!" << endl;
    }

    cout << "vec.insert(0, 3);" << endl;
    cout << "Expected output:" << "3 0 0 0 0 0 4 0 0 0 0 0 " << endl;
    cout << "Your output:    ";
    try
    {
        vec2.insert(0, 3);
        cout << vec2 << endl;
    }
    catch (IndexOutOfRangeException)
    {
        cout << "Caught IndexOutOfRangeException!" << endl;
    }

    cout << "vec.insert(vec.size(), 7);" << endl;
    cout << "Expected output:" << "3 0 0 0 0 0 4 0 0 0 0 0 7 " << endl;
    cout << "Your output:    ";
    try
    {
        vec2.insert(vec2.size(), 7);
        cout << vec2 << endl;
    }
    catch (IndexOutOfRangeException)
    {
        cout << "Caught IndexOutOfRangeException!" << endl;
    }

    cout << "vec.insert(3, 8);" << endl;
    cout << "Expected output:" << "3 0 0 8 0 0 0 4 0 0 0 0 0 7 " << endl;
    cout << "Your output:    ";
    try
    {
        vec2.insert(3, 8);
        cout << vec2 << endl;
    }
    catch (IndexOutOfRangeException)
    {
        cout << "Caught IndexOutOfRangeException!" << endl;
    }

    cout << "vec.insert(-1, 4);" << endl;
    cout << "Expected output:" << "Caught IndexOutOfRangeException!" << endl;
    cout << "Your output:    ";
    try
    {
        vec2.insert(-1, 4);
        cout << vec2 << endl;
    }
    catch (IndexOutOfRangeException)
    {
        cout << "Caught IndexOutOfRangeException!" << endl;
    }

    cout << "vec.insert(10, 6);" << endl;
    cout << "Expected output:" << "3 0 0 8 0 0 0 4 0 0 6 0 0 0 7 " << endl;
    cout << "Your output:    ";
    try
    {
        vec2.insert(10, 6);
        cout << vec2 << endl;
    }
    catch (IndexOutOfRangeException)
    {
        cout << "Caught IndexOutOfRangeException!" << endl;
    }

    cout << "vec.insert(vec.size() + 1, 4);" << endl;
    cout << "Expected output:" << "Caught IndexOutOfRangeException!" << endl;
    cout << "Your output:    ";
    try
    {
        vec2.insert(vec2.size() + 1, 4);
        cout << vec2 << endl;
    }
    catch (IndexOutOfRangeException)
    {
        cout << "Caught IndexOutOfRangeException!" << endl;
    }

    cout << "vec.insert(12, 5);" << endl;
    cout << "Expected output:" << "3 0 0 8 0 0 0 4 0 0 6 0 5 0 0 7 " << endl;
    cout << "Your output:    ";
    try
    {
        vec2.insert(12, 5);
        cout << vec2 << endl;
    }
    catch (IndexOutOfRangeException)
    {
        cout << "Caught IndexOutOfRangeException!" << endl;
    }

    cout << "vec.insert(3, 9);" << endl;
    cout << "Expected output:" << "3 0 0 9 8 0 0 0 4 0 0 6 0 5 0 0 7 " << endl;
    cout << "Your output:    ";
    try
    {
        vec2.insert(3, 9);
        cout << vec2 << endl;
    }
    catch (IndexOutOfRangeException)
    {
        cout << "Caught IndexOutOfRangeException!" << endl;
    }

    cout << "vec.insert(6, 2);" << endl;
    cout << "Expected output:" << "3 0 0 9 8 0 2 0 0 4 0 0 6 0 5 0 0 7 " << endl;
    cout << "Your output:    ";
    try
    {
        vec2.insert(6, 2);
        cout << vec2 << endl;
    }
    catch (IndexOutOfRangeException)
    {
        cout << "Caught IndexOutOfRangeException!" << endl;
    }
}

int main()
{
    testPushBack();
    testInsert();

//    IntVector v;
//
//    for(int i = 0; i < 10; i++){
//        v.insert(0, i);
//        cout << v << endl;
//    }
//    cout << "*****************" << endl;
//    cout << "*****************" << endl;
//    cout << "*****************" << endl;
//    v.clear();
//    for(int i = 0; i < 10; i++){
//        v.push_back(i);
//        cout << v << endl;
//    }

    return 0;
}
