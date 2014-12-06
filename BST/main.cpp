// In The Name Of God
// ========================================
// * File Name : main.cpp
// 
// * Creation Date : 06-12-2014
//
// * Last Modified : Sat 06 Dec 2014 06:13:48 PM IRST
//
// * Created By : Parham Alvani (parham.alvani@gmail.com)
// =======================================
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
	
	cout << "----------------------------------------" << endl;
	ints.inorder();

	cout << "----------------------------------------" << endl;
	cout << ints.sup(2) << endl;
	
	ints.remove(10);
	
	cout << "----------------------------------------" << endl;
	ints.inorder();
}
