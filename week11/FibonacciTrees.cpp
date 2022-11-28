//
// Created by MD. Zahed on 28/11/2022.
//

#include <vector>
#include <iostream>
#include <map>

using namespace std;

int tree_size;
int leaf_size;
int tree_depth = 1;
vector<string> vect;

map<int, int> _map;


struct Node{
    Node *top;
    Node *left;
    Node *right;
    int val;
};

Node head;


int fibonacci2(int i);
void fibonacci3(int i);


int main_week11(){

    int n;

    cin >> n;
    int val = fibonacci2(n);
    _map[n] = val;

    cout << "Call tree in pre-order: ";
    fibonacci3(n);
    cout << endl;

    cout << "Call tree size: "<< tree_size << endl;
    cout << "Call tree depth: "<< tree_depth << endl;
    cout << "Call tree leafs: "<< leaf_size << endl;


    return 0;
}

bool stop_depth = false;



int fibonacci2(int i) {

    tree_size++;
    if (i ==1 | i == 0) {
        leaf_size++;
        stop_depth = true;
        return 1;
    }

    if (!stop_depth){
        tree_depth++;
    }

    int val1 = fibonacci2(i-1);
    int val2 = fibonacci2(i-2);

    _map[i-1] = val1;
    _map[i-2] = val2;

    return val1 + val2;
}




void fibonacci3(int i) {
    cout << _map[i] << " ";

    if (i ==1 | i == 0) {

        return;
    }

    fibonacci3(i-1);
    fibonacci3(i-2);

}
