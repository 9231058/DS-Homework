#include <cstdlib>
#include <iostream>
#include "BST.h"

using namespace std;

int main(int argc, char* argv[]){
	BST<int> ints;
	ints.insert(10);
	ints.insert(20);
	ints.insert(5);
	ints.insert(100);
	ints.insert(12);
	ints.insert(1);
	ints.insert(32);
	ints.insert(2);
	ints.inorder();
	cout << ints.sup(2) << endl;
}
