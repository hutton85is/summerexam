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

        /*******TODO******/
        void headInsert(T value) {
            head = new ListNode<T>(value, head);
            if (tail == NULL){
                tail = head;
            }
        }

        /*******Todo******/
        void tailInsert(T value) {
            if(head == NULL){
                headInsert(value);
                return;
            }
            ListNode<T>* newNode = new ListNode<T>(value, NULL);
            tail->next = newNode;
            tail = newNode;
        }

        /******TODO******/
        T headRemove() {
            if(head == NULL) {
                throw EmptyException();
            }
            ListNode<T>* deleteNode = head;
            T returnValue = deleteNode->data;
            head = head->next;
            delete deleteNode;
            if(head == NULL){
                tail = head;
            }
            return returnValue;
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
