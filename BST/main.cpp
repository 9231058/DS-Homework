#include <cstdlib>
#include "BST.h"

int main(int argc, char* argv[]){
	BST<int> ints;
	ints.insert(10);
	ints.insert(20);
	ints.insert(5);
	ints.inorder();
}
