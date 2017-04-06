#include <iostream>
#include "linkedlist.h"

using namespace std;

int main() {

    cout << "\n -- new LinkedList --" << endl;
    LinkedList<int> lis;
    int value;

    value = 6;
    lis.tailInsert(value);
    cout << "tailInsert(" << value << ")" << endl;
    cout << "list: " << lis << endl;

    try
    {
        cout << "headRemove()" << endl;
        value = lis.headRemove();
        cout << "value = " << value << endl;
        cout << "list: " << lis << endl;
    }
    catch(EmptyException) {
        cout << "Caught EmptyException" << endl;
    }

    try
    {
        cout << "headRemove()" << endl;
        value = lis.headRemove();
        cout << "value = " << value << endl;
        cout << "list: " << lis << endl;
    }
    catch(EmptyException) {
        cout << "Caught EmptyException" << endl;
    }

    value = 3;
    lis.tailInsert(value);
    cout << "tailInsert(" << value << ")" << endl;
    cout << "list: " << lis << endl;

    value = 9;
    lis.tailInsert(value);
    cout << "tailInsert(" << value << ")" << endl;
    cout << "list: " << lis << endl;

    value = 12;
    lis.tailInsert(value);
    cout << "tailInsert(" << value << ")" << endl;
    cout << "list: " << lis << endl;

    value = 43;
    lis.headInsert(value);
    cout << "headInsert(" << value << ")" << endl;
    cout << "list: " << lis << endl;

    value = 83;
    lis.headInsert(value);
    cout << "headInsert(" << value << ")" << endl;
    cout << "list: " << lis << endl;

    value = 53;
    lis.headInsert(value);
    cout << "headInsert(" << value << ")" << endl;
    cout << "list: " << lis << endl;

    value = 23;
    lis.headInsert(value);
    cout << "headInsert(" << value << ")" << endl;
    cout << "list: " << lis << endl;

    try
    {
        cout << "headRemove()" << endl;
        value = lis.headRemove();
        cout << "value = " << value << endl;
        cout << "list: " << lis << endl;
    }
    catch(EmptyException) {
        cout << "Caught EmptyException" << endl;
    }

    value = 63;
    lis.tailInsert(value);
    cout << "tailInsert(" << value << ")" << endl;
    cout << "list: " << lis << endl;

    value = 89;
    lis.headInsert(value);
    cout << "headInsert(" << value << ")" << endl;
    cout << "list: " << lis << endl;

    value = 2;
    lis.tailInsert(value);
    cout << "tailInsert(" << value << ")" << endl;
    cout << "list: " << lis << endl;

    value = 76;
    lis.tailInsert(value);
    cout << "tailInsert(" << value << ")" << endl;
    cout << "list: " << lis << endl;

    try
    {
        cout << "headRemove()" << endl;
        value = lis.headRemove();
        cout << "value = " << value << endl;
        cout << "list: " << lis << endl;
    }
    catch(EmptyException) {
        cout << "Caught EmptyException" << endl;
    }

    value = 45;
    lis.headInsert(value);
    cout << "headInsert(" << value << ")" << endl;
    cout << "list: " << lis << endl;

    return 0;
}
