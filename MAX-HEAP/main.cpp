#include "MaxHeap.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
	MaxHeap<int> heap;
	heap.push(1);
	heap.push(2);
	heap.push(10);
	heap.push(140);
	heap.push(3);

	while(!heap.isEmpty()){
		cout << heap.top() << endl;
		heap.pop();
	}
}
