#include "ex04-library.h"
using namespace std;


// Task 4(a).  Write a placeholder implementation of SensorBuffer's
//             constructor and methods

// Task 4(b).  Write a working implementation of write() and faults()

// Task 4(c).  Write a working implementation of read()

// Task 4(d).  Write a working implementation of clear()

// Do not modify
Buffer::~Buffer() {
    // Empty destructor
}

SensorBuffer::SensorBuffer(int a, int b, int c) {
    this->default_val = a;
    this->minimum = b;
    this->maximum = c;
}

void SensorBuffer::write(int v) {

    if(v >= minimum && v <= maximum) {
        vect.push_back(v);
        return;
    }

    if (v < minimum) {
        vect.push_back(minimum);
        fault_counter++;
        return;
    }

    if (v > maximum) {
        vect.push_back(maximum);
        fault_counter++;
    }

}

int SensorBuffer::read() {

    if (vect.size() < 1) return default_val;

    int val = vect.at(0);
    vect.erase(vect.begin());
    return val;
}

unsigned int SensorBuffer::faults() {
    return fault_counter;
}

void SensorBuffer::clear(){
    vect.clear();
    fault_counter = 0;
}