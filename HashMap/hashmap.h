#ifndef HASHMAP_H
#define HASHMAP_H

#include <iostream>

#include <list>

#include "keypair.h"

using namespace std;

class NotFoundException {};

#define INITIAL_SIZE 37

///USE THIS TYPEDEF, map_iterator.
///IT WILL SAVE YOU A HEADACHE!
///kv, Kári ;)
#define map_iterator typename list<KeyPair<K,T> >::iterator

/// just write
/// map_iterator it = blabla
/// instead of
/// typename list<KeyPair<K,T> >::iterator it = blabla
/// if you want to iterate over a list of KeyPairs


template <class K, class T>

class HashMap
{
    public:
        HashMap() {
            capacity = INITIAL_SIZE;
            map = new list<KeyPair<K,T> >[capacity];
        }
        virtual ~HashMap() {}

        void insert(K key, T value) {

            /// Todo: Implement!
        }

        T find(K key) {

            /// Todo: Implement!
            throw NotFoundException();
        }

        friend ostream &operator <<(ostream &outs, const HashMap &hashmap) {

            for(int i = 0; i < hashmap.capacity; i++) {

                list<KeyPair<K,T> > lis = hashmap.map[i];

                for(map_iterator it = lis.begin(); it != lis.end(); it++) {
                    outs << it->value << " ";
                }
            }
            return outs;
        }

    private:
        list<KeyPair<K,T> > *map;   ///This is a dynamic array of list,
                                    ///each one a list of KeyPair<K,T>
                                    ///to add to the Nth list you would first
                                    ///make a list<KeyPair<K,T> > lis = map[N],
                                    ///then do lis.push_back(someKeyPair);
        int capacity;
};

#endif // HASHMAP_H
