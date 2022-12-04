/*
 * Author: Jacob Tomaszewski
 * Date:   10/16/2022
 * LAB 4: Linked Lists
 */

#include "LinkedList.h"
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4};


    LinkedList lst;

    //inserting values into linked list
    for (int i : arr) {
        lst.pushFront(i);
    }
    cout << "push front: ";
    lst.display();
    lst.destroy();
    cout << '\n';

    //inserting values into linked list
    for (int i : arr) {
        lst.pushBack(i);
    }
    cout << "push back:  ";
    lst.display();
    cout << '\n';

    lst.popFront();
    cout << "pop front:  ";
    lst.display();
    cout << '\n';

    lst.popBack();
    cout << "pop back:   ";
    lst.display();
    cout << '\n';

    return 0;
}

