// In The Name Of God
// ========================================
// * File Name : GenList.h
// 
// * Creation Date : 05-12-2014
//
// * Last Modified : Sun 07 Dec 2014 01:00:10 AM IRST
//
// * Created By : Parham Alvani (parham.alvani@gmail.com)
// =======================================
#pragma once

#include <stdexcept>
#include <iostream>

template<class T>
class GenList{
private:

	class Node{
	public:
		Node(const T& object);
		Node(const Node* link);

		Node* getNext();
		void setNext(Node* next);
		bool getTag();
		T& getData();
		Node* getLink();

		//virtual ~Node();
	private:
		bool bTag;	// True = data, False = link
		T mData;
		Node* mLink;
		Node* mNext;
	};

	int mSize;
	Node* mStart;

public:
	List();
	List(const List<T> &orig);
	List<T>& operator=(const List<T> &orig);

	void push_front(const T& object);
	void push_front(const Node* link);
	void pop_front();
	T& front();
	T& back();
	typename List<T>::Iterator begin();
	typename List<T>::Iterator end();
	T& at(int index) const;
	T& operator[](int index) const;
	int size() const;
	
	template<class V> friend std::ostream& operator<<(std::ostream &os, const List<V>& list);

	virtual ~List();

	class Iterator {
	public:
		Iterator(Node* startNode, Node* start, Node* finish);
		Iterator(const Iterator &orig);

		T& operator*()const;
		Iterator& operator++();
		Iterator operator++(int);
		Iterator& operator--();
		Iterator operator--(int);
		bool operator==(const Iterator &origin);
		bool operator!=(const Iterator &origin);

		//virtual ~Iterator();
	private:
		Node* mStart;
		Node* mCurrent;
		Node* mFinish;
	};
};

//-----------------List<T>::Node-------------------

template<class T>
List<T>::Node::Node(const T& object){
	mData = T(object);
	bTag = true;
	mNext = NULL;
}

template<class T>
List<T>::Node::Node(const Node* link){
	mLink = link;
	bTag = false;
	mNext = NULL;
}

template<class T>
typename List<T>::Node *List<T>::Node::getNext(){
	return mNext;
}

template<class T>
void List<T>::Node::setNext(Node* next){
	mNext = next;
}

template<class T>
T& List<T>::Node::getData(){
	return mData;
}

template<class T>
Node* List<T>::Node::getLink(){
	return mLink;
}

//===================================================
//------------------List<T>::Iterator----------------

template<class T>
List<T>::Iterator::Iterator(typename List<T>::Node* startNode, typename List<T>::Node* start, typename List<T>::Node* finish){
	mStart = start;
	mCurrent = startNode;
	mFinish = finish;
}

template<class T>
List<T>::Iterator::Iterator(const Iterator& orig){
	mFinish = orig.mFinish;
	mCurrent = orig.mCurrent;
	mStart = orig.mStart;
}

template<class T>
T& List<T>::Iterator::operator *() const{
	return mCurrent->getObject();
}

template<class T>
typename List<T>::Iterator& List<T>::Iterator::operator++(){
	if(mCurrent->getNext() != NULL){
		mCurrent = mCurrent->getNext();
	}else{
		mCurrent = mStart;
	}
	return *this;
}

template<class T>
typename List<T>::Iterator List<T>::Iterator::operator ++(int){
	Iterator old = *this;
	if(mCurrent->getNext() != NULL){
		mCurrent = mCurrent->getNext();
	}else{
		mCurrent = mStart;
	}
	return old;
}

template<class T>
typename List<T>::Iterator& List<T>::Iterator::operator--(){
	if(mCurrent->getBack() != NULL){
		mCurrent = mCurrent->getBack();
	}else{
		mCurrent = mFinish;
	}
	return *this;
}

template<class T>
typename List<T>::Iterator List<T>::Iterator::operator --(int){
	Iterator old = *this;
	if (mCurrent->getBack() != NULL){
		mCurrent = mCurrent->getBack();
	} else {
		mCurrent = mFinish;
	}
	return old;
}

template<class T>
bool List<T>::Iterator::operator==(const Iterator &origin){
	return mCurrent == origin.mCurrent;
}

template<class T>
bool List<T>::Iterator::operator!=(const Iterator &origin){
	return mCurrent != origin.mCurrent;
}

//=======================================================
//---------------------List<T>---------------------------

template<class T>
List<T>::List(){
	mStart = NULL;
	mSize = 0;
}

template<class T>
List<T>::List(const List<T>& orig){
	// TODO Implement list copying
}

template<class T>
List<T>& List<T>::operator=(const List<T>& orig){
	// TODO Implement list assignment
}

template<class T>
T& List<T>::front(){
	// Not yet supported
}

template<class T>
T& List<T>::back(){
	// Not yet supported
}

template<class T>
typename List<T>::Iterator List<T>::begin(){
	// Not yet supported
}

template<class T>
typename List<T>::Iterator List<T>::end(){
	// Not yet supported
}

template<class T>
void List<T>::push_front(const T& object){
	mSize++;

	if(mStart == NULL){
		mStart = new Node(object);
		return;
	}

	Node* new_node = new Node(object);
	new_node->setNext(mStart);
	mStart = new_node;
}

template<class T>
void List<T>::push_front(const Node* link){
	mSize++;

	if(mStart == NULL){
		mStart = new Node(link);
		return;
	}

	Node* new_node = new Node(link);
	new_node->setNext(mStart);
	mStart = new_node;
}

template<class T>
void List<T>::pop_front(){
	if(mStart == NULL){
		return;
	}

	mSize--;

	Node* inner_start = mStart;
	mStart = mStart->getNext();
	mStart->setBack(NULL);
	delete(inner_start);

	if(mStart == NULL)
		mFinish = NULL;
}

template<class T>
T& List<T>::at(int index) const{
	int i = 0;
	Node* inner_start = mStart;

	if (index >= size) {
		throw(new std::invalid_argument("No such index"));
	}

	while (i < index) {
		i++;
		inner_start = inner_start->getNext();
	}
	return inner_start->getObject();
}

template<class T>
T& List<T>::operator [](int index) const{
	return at(index);
}

template<class T>
int List<T>::size() const{
	return mSize;
}

template<class V>
std::ostream& operator<<(std::ostream &os, const List<V>& list){
	typename List<V>::Node* inner_start = list.mStart;
	while (inner_start != NULL) {
		os << "| ";
		os << inner_start->getObject();
		os << " |";
		inner_start = inner_start->getNext();
	}
	return os;
}

template<class T>
List<T>::~List(){
	while (mStart != NULL) {
		Node* inner_start = mStart;
		mStart = mStart->getNext();
		delete inner_start;
	}
}
