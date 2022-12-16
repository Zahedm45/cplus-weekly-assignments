#include <iostream>
#include "ex03-library.h"
using namespace std;

int main3() {
    Hotel hotel = Hotel();

    cout << "Initial hotel occupancy:" << endl;
    hotel.display();

/*    hotel.removeGuest("Lotus", "Kathryn Bigelow", "456abc");
    cout << endl << "After removing a guest from room 'Lotus':" << endl;
    hotel.display();

    hotel.removeGuest("Waterlily", "Taika Waititi", "pqr567");
    cout << endl << "After removing a guest from non-existent room 'Waterlily':" << endl;
    hotel.display();*/

    hotel.removeGuest("Orchid", "Taika Waititi", "abc123");
    cout << endl << "After removing a non-existent guest from room 'Orchid':" << endl;
    hotel.display();

/*    hotel.removeGuest("Orchid", "Alan Smithee", "abc321");
    cout << endl << "After removing a guest with wrong id from room 'Orchid':" << endl;
    hotel.display();

    hotel.removeGuest("Orchid", "Alan Smithee", "abc123");
    cout << endl << "After removing a guest from room 'Orchid':" << endl;
    hotel.display();*/

    return 0;
}
