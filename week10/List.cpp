//
// Created by MD. Zahed on 21/11/2022.
//

#include <vector>
#include "List.h"


List::List() {

}

List::~List() {

    Node *temp;
    while (first != NULL){

        temp = first;
        first = first->next;
        delete temp;
    }
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

    vector<int> tempArr;

    if (first == NULL) {
        return;
    }

    Node *temp = first;
    while (temp != NULL) {
        tempArr.push_back(temp->val);
        temp = temp->next;
    }

    temp = first;
    int n = (int) tempArr.size();

    for (int i = (n - 1); i >= 0; --i) {

        if (temp == NULL) {
            break;
        }

        temp->val = tempArr[i];
        temp = temp->next;

    }


}


/*
int main() {

    List list;

    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.print();
    list.reverse();
    list.print();



}*/
