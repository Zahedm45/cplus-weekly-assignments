#include <iostream>
#include "ex02-library.h"
using namespace std;

// Task 2(a).  Implement this function
unsigned int length(Elem *list) {
    // Write your code here

    Elem *temp = list;

    unsigned int total = 0;
    while (temp != nullptr) {

        total += temp->times;
        temp = temp->next;
    }

    return total;
}

// Task 2(b).  Implement this function
Elem* append(Elem *list, int v) {
    // Write your code here



    Elem *temp = list;
    Elem *last_node;

    while (temp != nullptr) {

        if (temp->value == v) {
            temp->times++;
            return list;
        }

        last_node = temp;
        temp = temp->next;
    }


    Elem *new_node = new Elem();
    new_node->value = v;
    new_node->times = 1;
    new_node->next = nullptr;

    if (list == nullptr) {
        list = new_node;
    } else {
        last_node->next = new_node;
    }

    return list;
}

// Task 2(c).  Implement this function
Elem* buildRLEList(int *data, unsigned int n) {
    // Write your code here


    Elem *list = new Elem();
    list->value = data[0];
    list->times++;
    list->next = nullptr;

    for (int i = 1; i < n; ++i) {
        list = append(list, data[i]);
    }

    return list;
}

// Do not modify
void displayRLEList(Elem *list) {
    if (list == nullptr) {
        return;
    }
    cout << " " << list->value << " (x" << list->times << ")";
    displayRLEList(list->next);
}
