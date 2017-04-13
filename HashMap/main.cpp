#include <iostream>

#include "idkey.h"
#include "hashmap.h"

using namespace std;

int main() {

    cout << "Just make sure that players 01-08 are added to the list." << endl;
    cout << "The order in which they are added is arbitrary." << endl;
    cout << endl;

    HashMap<IdKey, string> hashMap;
    cout << "hashMap.insert(7656856, \"player01\");" << endl;
    hashMap.insert(7656856, "player01");
    cout << "HashMap contents: " << hashMap << endl;
    cout << "hashMap.insert(7656856, \"player02\");" << endl;
    hashMap.insert(2345234, "player02");
    cout << "HashMap contents: " << hashMap << endl;
    cout << "hashMap.insert(7656856, \"player03\");" << endl;
    hashMap.insert(2347568, "player03");
    cout << "HashMap contents: " << hashMap << endl;
    cout << "hashMap.insert(7656856, \"player04\");" << endl;
    hashMap.insert(78867442, "player04");
    cout << "HashMap contents: " << hashMap << endl;
    cout << "hashMap.insert(7656856, \"player05\");" << endl;
    hashMap.insert(234525, "player05");
    cout << "HashMap contents: " << hashMap << endl;
    cout << "hashMap.insert(7656856, \"player06\");" << endl;
    hashMap.insert(23452345, "player06");
    cout << "HashMap contents: " << hashMap << endl;
    cout << "hashMap.insert(7656856, \"player07\");" << endl;
    hashMap.insert(2349789, "player07");
    cout << "HashMap contents: " << hashMap << endl;
    cout << "hashMap.insert(7656856, \"player08\");" << endl;
    hashMap.insert(234758678, "player08");
    cout << "HashMap contents: " << hashMap << endl;

    cout << endl;

    cout << "hashMap.find(78867442)" << endl;
    cout << "Expected: " << "player04" << endl;
    cout << "Got       ";
    try {
        cout << hashMap.find(78867442) << endl;
    }
    catch(NotFoundException) {
        cout << "Caught NotFoundException" << endl;
    }

    cout << "hashMap.find(2349789)" << endl;
    cout << "Expected: " << "player07" << endl;
    cout << "Got       ";
    try {
        cout << hashMap.find(2349789) << endl;
    }
    catch(NotFoundException) {
        cout << "Caught NotFoundException" << endl;
    }

    cout << "hashMap.find(2345234)" << endl;
    cout << "Expected: " << "player02" << endl;
    cout << "Got       ";
    try {
        cout << hashMap.find(2345234) << endl;
    }
    catch(NotFoundException) {
        cout << "Caught NotFoundException" << endl;
    }

    cout << "hashMap.find(35645)" << endl;
    cout << "Expected: " << "Caught NotFoundException" << endl;
    cout << "Got       ";
    try {
        cout << hashMap.find(35645) << endl;
    }
    catch(NotFoundException) {
        cout << "Caught NotFoundException" << endl;
    }

    cout << "hashMap.find(234758678)" << endl;
    cout << "Expected: " << "player08" << endl;
    cout << "Got       ";
    try {
        cout << hashMap.find(234758678) << endl;
    }
    catch(NotFoundException) {
        cout << "Caught NotFoundException" << endl;
    }

    cout << "hashMap.find(7656856)" << endl;
    cout << "Expected: " << "player01" << endl;
    cout << "Got       ";
    try {
        cout << hashMap.find(7656856) << endl;
    }
    catch(NotFoundException) {
        cout << "Caught NotFoundException" << endl;
    }
    return 0;
}
