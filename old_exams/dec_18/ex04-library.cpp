#include "ex04-library.h"
#include <iostream>

using namespace std;

//Do not modify
template<class T>
void Node<T>::printNode(){
	cout << "Name: " << name << ", value: " << value ;
	cout << ", children: " << children.size() << endl;
}

//Exercise 4 (a) Check and correct if necessary
template<class T>
Node<T>::Node(string name, T value){
    this->name = name;
    this->value = value;
}

//Exercise 4 (b) Implement getName, getValue, and addChild
template<class T>
string Node<T>::getName(){
	//put your code here
    return name;
}

template<class T>
T Node<T>::getValue(){
	//put your code here
    return value;
}

template<class T>
void Node<T>::addChild(Node<T> * child){
	//put your code here

/*    for (const auto &item : this->children) {
        if (child.)
    }*/

    this->children.push_back(child);
}

//Exercise 4 (c) Implement this method
template<class T>
void Node<T>::printLeafNodes(){
    printLeapNodesHelper(this);
    cout << endl;

}


//Exercise 4 (d) Implement this method
template<class T>
int Node<T>::countMembersOfSubTree(){
	//put your code here
}

template<class T>
Node<T>::~Node() {
    for (const auto &child : children){
        delete child;
    }


}

template<class T>
void Node<T>::printLeapNodesHelper(Node<T> *pNode) {

    if (pNode->children.empty()) {
        cout << pNode->name << " " << pNode->value << " ";
    }

    for (const auto &item : pNode->children) {
        printLeapNodesHelper(item);
    }
}

//Do not modify
template class Node<string>;