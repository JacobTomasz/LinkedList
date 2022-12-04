/*
 * Author: Jacob T
 * Date:   10/16/2022
 */

#include "LinkedList.h"
using namespace std;

//constructor/destructor
LinkedList::LinkedList() {
    this->headptr=nullptr;
}

LinkedList::~LinkedList() {
    destroy();
}

//methods
void LinkedList::display(){
    Node *tmp = headptr;

    if (headptr == nullptr) {
        cout << "list empty" << endl;
        return;
    }

    while (tmp != nullptr) {
        cout << tmp->data << " ";
        tmp = tmp->lnkNext;
    }
}

void LinkedList::destroy() {
    Node *next;
    while (headptr != nullptr) {
        next = headptr->lnkNext;
        delete[] headptr;
        headptr = next;
    }
    headptr = nullptr;
}


void LinkedList::pushFront(int val) {
    Node *l_node= new Node;     //l_node <=> local node
    l_node->lnkNext = nullptr;
    l_node->data = val;
    l_node->lnkNext = headptr;
    headptr = l_node;
}

void LinkedList::pushBack(int val) {
    Node *l_node = new Node;
    l_node->data = val;
    l_node->lnkNext = nullptr;
    if (headptr == nullptr) {
        headptr = l_node;
    }
    else {
        Node *tmp = headptr;
        while (tmp->lnkNext != nullptr)
            tmp = tmp->lnkNext;
        tmp->lnkNext = l_node;
    }
}

Node *LinkedList::popFront() {
    if (headptr == nullptr) {
        return nullptr;
    }
    Node *tmp = headptr;
    headptr = headptr->lnkNext;
    delete tmp;
    return headptr;
}

Node *LinkedList::popBack() {

    if (headptr == nullptr) {
        return nullptr;
    }

    if (headptr->lnkNext == nullptr) {
        delete headptr;
        return nullptr;
    }

    Node *last = headptr;

    while (last->lnkNext->lnkNext != nullptr)
        last = last->lnkNext;

    delete (last->lnkNext);
    last->lnkNext = nullptr;

    return headptr;
}


