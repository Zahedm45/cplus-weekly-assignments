#include <iostream>
#include "ex02-library.h"
using namespace std;

// Task 2(a).  Implement this function
void shift(Passenger *q, unsigned int n) {

    // Write your code here
    Passenger *temp = q;
    while (temp != nullptr) {
        temp->row = temp->row + n;
        temp = temp->next;
    }

}

// Task 2(b).  Implement this function
Passenger* find(Passenger *q, unsigned int rowMin, unsigned int rowMax) {
    // Replace the following with your code

    Passenger *new_list_head = new Passenger();
    Passenger *new_list = new_list_head;




    Passenger *temp = q;
    int counter = 0;
    while (temp != nullptr) {

        counter = temp->row;
        if (counter >= rowMin && counter <= rowMax) {
            Passenger *new_passenger = new Passenger();
            new_passenger->name = temp->name;
            new_passenger->ticket = temp->ticket;
            new_passenger->row = temp->row;
            new_passenger->seat = temp->seat;
            new_passenger->next = nullptr;

            new_list->next = new_passenger;
            new_list = new_list->next;
        }


        temp = temp->next;
    }


    Passenger *to_be_returned = new_list_head->next;
    delete new_list_head;
    return to_be_returned;
}

// Task 2(c).  Implement this function
bool occupied(Passenger *q, unsigned int row, char seat) {
    // Replace the following with your code

    Passenger *temp = q;
    while (temp != nullptr) {

        if (temp->row == row && temp->seat == seat) {
            return true;
        }

        temp = temp->next;
    }



    return false;
}

// Do not modify
void displayQueue(Passenger *q) {
    if (q == nullptr) {
        return;
    }
    cout << q->name << " - ticket: " << q->ticket;
    cout << ", seat " << q->row << q->seat << endl;
    displayQueue(q->next);
}
