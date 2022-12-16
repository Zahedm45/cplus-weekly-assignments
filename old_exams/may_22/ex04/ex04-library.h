#ifndef EX04_LIBRARY_H_
#define EX04_LIBRARY_H_
#include <vector>
using namespace std;

class Buffer {
public:
    virtual void write(int v) = 0;
    virtual int read() = 0;
    virtual ~Buffer();
};


class SensorBuffer : public Buffer{
private:
    int default_val;
    int minimum;
    int maximum;

    vector<int> vect;
    int fault_counter;

public:
    SensorBuffer(int a, int b, int c);

public:
    void write(int v) override;
    int read() override;

    unsigned int faults();
    void clear();

};


// Task 4(a).  Declare the class SensorBuffer, by extending Buffer
// Write your code here

#endif /* EX04_LIBRARY_H_ */
