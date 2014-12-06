#pragma once

#include <cstdlib>
#include <stdexcept>
#include <iostream>

template<class T>
class BST{
	private:
		class Node{
			private:
				T object;
				Node* right;
				Node* left;
				Node* parent;
			public:
				Node(const T& object);

				void setObject(const T& object);
				T& getObject();
				void setRight(Node* right);
				Node* getRight();
				void setLeft(Node* left);
				Node* getLeft();
				void setParent(Node* parent);
				Node* getParent();
		};
		Node* root;

		void inorder(Node* start);
	public:
		BST();

		void remove(const T& object);
		void insert(const T& object);
		const T& sup(const T& object);
		void inorder();
};

template<class T>
BST<T>::Node::Node(const T& object){
	this->object = T(object);
	right = NULL;
	left = NULL;
	parent = NULL;
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
void BST<T>::Node::setParent(Node* parent){
	this->parent = parent;
}

template<class T>
typename BST<T>::Node* BST<T>::Node::getParent(){
	return parent;
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
	Node* new_node = new Node(object);
	Node* x = root;
	Node* y = NULL;
	while(x != NULL){
		y = x;
		if(x->getObject() < object){
			x = x->getRight();
		}else{
			x = x->getLeft();
		}
	}
	if(y->getObject() < object){
		y->setRight(new_node);
		new_node->setParent(y);
	}
	if(y->getObject() > object){
		y->setLeft(new_node);
		new_node->setParent(y);
	}
}

template<class T>
const T& BST<T>::sup(const T& object){
	if(root == NULL) throw std::invalid_argument("BST is empty, Cannot find your elemet");	

	Node* x = root;
	Node* y = NULL;
	while(x != NULL){
		y = x;
		if(x->getObject() < object){
			x = x->getRight();
		}else if(x->getObject() == object){
			break;
		}
		else{
			x = x->getLeft();
		}
	}
	x = NULL;
	if(y->getObject() == object){
		if(y->getRight() == NULL){
			do{
			x = y;
			y = y->getParent();
			}while(x == y->getRight());
		}else{
			x = y->getRight();
			while(x != NULL){
				y = x;
				x = x->getLeft();
			}
		}
	}else{
		throw std::invalid_argument("404 Not Found");
	}
	if(y != NULL){
		return y->getObject();
	}else{
		throw std::invalid_argument("404 Not Found");
	}

}

template<class T>
void BST<T>::remove(const T& object){
	if(root == NULL) throw std::invalid_argument("BST is empty, Cannot delete.");
	
	Node* x = root;
	Node* y = NULL;
	while(x != NULL){
		y = x;
		if(x->getObject() < object){
			x = x->getRight();
		}else{
			x = x->getLeft();
		}
	}
	if(y->getObject() == object){
		if(!y->getRight() || !y->getLeft()){
			
		}
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

