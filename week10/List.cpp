//
// Created by MD. Zahed on 21/11/2022.
//

#include "List.h"


List::List() {

}

List::~List() {

}

void List::insert(int n) {

    Node *newNode = new Node;
    newNode->val = n;

    if (first == NULL) {
        first = newNode;
        return;
    }


    Node *temp = first;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;


}

void List::print() {

    Node *temp = first;

    while (temp != NULL) {
        cout <<temp->val<< " ";
        temp = temp->next;
    }
    cout << endl;

}

void List::reverse() {

}


int main() {

    List list;

    list.insert(1);
    list.insert(1);
    list.insert(1);
    list.insert(1);

    list.print();




}