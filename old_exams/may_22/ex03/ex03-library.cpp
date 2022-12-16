#include <iostream>
#include "ex03-library.h"
using namespace std;

// Do not modify
Hotel::Hotel() {
    this->roomNames.push_back("Daisy");
    this->roomOccupancy["Daisy"] = {"Alan Smithee", "xyz890"};

    this->roomNames.push_back("Geranium");

    this->roomNames.push_back("Lotus");
    this->roomOccupancy["Lotus"] = {"Kathryn Bigelow", "456abc"};

    this->roomNames.push_back("Orchid");
    this->roomOccupancy["Orchid"] = {"Alan Smithee", "abc123"};

    this->roomNames.push_back("Tulip");
    this->roomOccupancy["Tulip"] = {"Denis Villeneuve", "123xyz"};
}

// Task 3(a).  Implement this method
void Hotel::renameRoom(string oldName, string newName) {
    // Write your code here

    bool contain_old_name = false;

    for (string str: roomNames) {
        if (str == oldName) contain_old_name = true;
        if (str == newName) return;
    }

    if (!contain_old_name) return;


    for (int i = 0; i < roomNames.size(); ++i) {
        if (roomNames[i] == oldName ) {
            roomNames[i] = newName;
            break;
        }
    }


    try {
        Guest guest = roomOccupancy.at(oldName);
        roomOccupancy.erase(oldName);
        roomOccupancy[newName] = guest;

    } catch (out_of_range&) {
        //cout << "not found" << endl;
    }




}

// Task 3(b).  Implement this method
void Hotel::removeGuest(string roomName, string guestName, string guestId) {
    // Write your code here

    try {
        Guest guest = roomOccupancy.at(roomName);

        if (guest.id == guestId && guest.name == guestName) {
            roomOccupancy.erase(roomName);
        }

    } catch (out_of_range&) {
        //cout << "not found" << endl;
    }

}

// Task 3(c).  Implement this method
void Hotel::findRoomByGuestId(vector<string> guestIds) {
    // Write your code here


    for (const auto &str: roomNames) {

        try {
            Guest guest = roomOccupancy.at(str);

            for (const auto &g_id: guestIds) {
                if (g_id == guest.id) {
                    cout << str << endl;
                }
            }

        } catch (out_of_range&) {
            //cout << "not found" << endl;
        }
    }


}

// Do not modify
void Hotel::display() {
    for (auto it = this->roomNames.begin(); it != this->roomNames.end(); it++) {
        cout << "Room '" << *it << "' is ";
        if (this->roomOccupancy.find(*it) == this->roomOccupancy.end()) {
            cout << "empty" << endl;
        } else {
            cout << "occupied by " << this->roomOccupancy[*it].name;
            cout << " (id: " << this->roomOccupancy[*it].id << ")" << endl;
        }
    }
}
