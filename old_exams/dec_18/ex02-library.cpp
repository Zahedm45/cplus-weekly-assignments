#include "ex02-library.h"
#include <iostream>

//Do not modify
int Node::countChildren(){
	return children.size();
}

//Exercise 2 (a) Implement the constructor and getName()
Node::Node(string name){
	//put your code here
}

string Node::getName(){
	//put your code here
}

//Exercise 2 (b) Implement this method
void Node::addChild(Node * child){
	//put your code here
}

//Exercise 2 (c) Check and correct if necessary
void Node::printParentNodes(){
	for(int i=0; i<children.size()-1;i++){
		children[i]->printParentNodes();
	}
	cout << this->name << ' ';
}

//Exercise 2 (d) Implement this method
void Node::printMembersOfSubTree(int generation){
	//put your code here
}
