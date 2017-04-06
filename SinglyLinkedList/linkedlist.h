#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <cstddef>
#include <iostream>

#include "listnode.h"

using namespace std;

class EmptyException { };

template <class T>
class LinkedList
{
    public:
        LinkedList() {
            head = NULL;
            tail = NULL;
        }

        virtual ~LinkedList() {
            ListNode<T> *tmp = head;
            while(head != NULL) {
                head = head->next;
                delete tmp;
                tmp = head;
            }
            head = NULL;
            tail = NULL;
        }

        void headInsert(T value) {
    /******************************************************/
            ///Todo: Implement!
    /******************************************************/
            if(tail == NULL) {
                tail = head;
            }
        }

        void tailInsert(T value) {
            if(head == NULL) {
                headInsert(value);
                return;
            }
    /******************************************************/
            ///Todo: Implement!
    /******************************************************/
        }

        T headRemove() {
            if(head == NULL) {
                throw EmptyException();
            }
    /******************************************************/
            ///Todo: Implement!
    /******************************************************/
        }

        friend ostream& operator <<(ostream& outs, const LinkedList<T> &lis) {
            ListNode<T> *tmpNode = lis.head;
            while(tmpNode != NULL) {
                outs << tmpNode->data << " ";
                tmpNode = tmpNode->next;
            }
            return outs;
        }

    private:

        ListNode<T> *head;
        ListNode<T> *tail;


};


#endif // LINKEDLIST_H
