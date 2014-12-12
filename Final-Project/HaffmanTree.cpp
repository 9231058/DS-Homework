// In The Name Of God
// ========================================
// * File Name : HaffmanTree.cpp
// 
// * Creation Date : 12-12-2014
//
// * Last Modified : Fri 12 Dec 2014 10:27:25 PM IRST
//
// * Created By : Parham Alvani (parham.alvani@gmail.com)
// =======================================
#include <MaxHeap.h>

HaffmanTree::HaffmanTree(){
	for(int i = 0; i < n; i++){
		Nodetype* p = pq.top();
		pq.pop();
		Nodetype* q = pq.top();
		pq.pop();
		Nodetype* r = new Nodetype();
		r->setLeft(p);
		r->setRight(q);
		r->setFrequency(p->getFrequency() + q->getFrequency());
		pq.push(r);
	}
	root = pq.top();
	pq.pop();
}
