/*
 * Author: Jacob T
 * Date:   10/16/2022
 */
#pragma once
#include <iostream>
using namespace std;

struct Node{
    int data;           //Some type of data
    Node *lnkNext;      //Next Link in the chain
};

class LinkedList {
private:
    Node *headptr;
public:
    LinkedList();
    ~LinkedList();
    void display();
    void destroy();          //destroys mem allocation
    void pushFront(int val); //Push a link to the front
    void pushBack(int val);  //Push a link to the end
    Node *popFront();        //Pull/pop a link from the front
    Node *popBack();         //Pull/pop a link from the back
};


