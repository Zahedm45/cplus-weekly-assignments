#ifndef EX04_LIBRARY_H_
#define EX04_LIBRARY_H_

#include <vector>
#include <string>

using namespace std;

template<class T>
class Node{
	private:
		string name;
		T value;
		vector<Node *> children;
	public:
        void printNode();
		Node(string name, T value);
        ~Node();
        string getName();
		T getValue();
		void addChild(Node * child);
		void printLeafNodes();
		int countMembersOfSubTree();
        //virtual ~Node();
        void printLeapNodesHelper(Node<T> *pNode);
        int memberCounter(Node<T> *pNode, int i);


};

#endif
