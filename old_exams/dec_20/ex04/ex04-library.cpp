#include "ex04-library.h"

// Task 4(a).  Write a placeholder implementation of LimitedBuffer's
//             constructor and methods

// Task 4(b).  Write a working implementation of write() and occupancy()

// Task 4(c).  Write a working implementation of read()

// Do not modify
Buffer::~Buffer() {
    // Empty destructor
}

LimitedBuffer::LimitedBuffer(unsigned int a, int b) {
    this->maximum_buffer = a;
    this->default_val = b;
}


void LimitedBuffer::write(int v) {


    if (counter < maximum_buffer) {
        counter++;
        queue.push_back(v);

    }
}

int LimitedBuffer::read() {

    if (queue.empty()) return default_val;

    int val = queue[0];
    queue.erase(queue.begin());
    counter--;
    return val;
}

unsigned int LimitedBuffer::occupancy() {
    return counter;
}
