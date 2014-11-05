#ifndef BST_H
#define BST_H

#include <cstdlib>
#include <iostream>

template<class T>
class BST{
	private:
		class Node{
			private:
				T object;
				Node* right;
				Node* left;
			public:
				Node(const T& object);

				void setObject(const T& object);
				T& getObject();
				void setRight(Node* right);
				Node* getRight();
				void setLeft(Node* left);
				Node* getLeft();
		};
		Node* root;

		void inorder(Node* start);
	public:
		BST();

		void insert(const T& object);
		void inorder();
};

template<class T>
BST<T>::Node::Node(const T& object){
	this->object = T(object);
	right = NULL;
	left = NULL;
}

template<class T>
void BST<T>::Node::setObject(const T& object){
	this->object = T(object);
}

template<class T>
T& BST<T>::Node::getObject(){
	return this->object;
}

template<class T>
void BST<T>::Node::setRight(Node* right){
	this->right = right;
}

template<class T>
typename BST<T>::Node* BST<T>::Node::getRight(){
	return right;
}

template<class T>
void BST<T>::Node::setLeft(Node* left){
	this->left = left;
}

template<class T>
typename BST<T>::Node* BST<T>::Node::getLeft(){
	return left;
}

template<class T>
BST<T>::BST(){
	root = NULL;
}

template<class T>
void BST<T>::insert(const T& object){
	if(root == NULL){
		root = new Node(object);
		return;
	}
	Node* x = root;
	Node* y;
	while(x != NULL){
		y = x;
		if(x->getObject() < object){
			x = x->getRight();
		}else{
			x = x->getLeft();
		}
	}
	if(y->getObject() < object){
		y->setRight(new Node(object));
	}
	if(y->getObject() > object){
		y->setLeft(new Node(object));
	}
}

template<class T>
void BST<T>::inorder(){
	inorder(root);
}

template<class T>
void BST<T>::inorder(typename BST<T>::Node* start){
	if(start){
		inorder(start->getLeft());
		std::cout << start->getObject() << std::endl;
		inorder(start->getRight());
	}
}

#endif
