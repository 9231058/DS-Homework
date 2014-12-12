// In The Name Of God
// ========================================
// * File Name : Nodetype.cpp
// 
// * Creation Date : 12-12-2014
//
// * Last Modified : Fri 12 Dec 2014 09:57:04 PM IRST
//
// * Created By : Parham Alvani (parham.alvani@gmail.com)
// =======================================
#include "Nodetype.h"

Nodetype::Nodetype(){
	mFrequency = 0;

}

Nodetype::Nodetype(char symbol, int frequency){
	mSymbol = symbol;
	mFrequency = frequency;
}

void Nodetype::setSymbol(char symbol){
	mSymbol = symbol;
}
	
char Nodetype::getSymbol(){
	return mSymbol;
}
	
void Nodetype::setFrequency(int frequency){
	mFrequency = frequency;
}
	
int Nodetype::getFrequency(){
	return mFrequency;
}

void Nodetype::setLeft(Nodetype* left){
	mLeft = left;
}

Nodetype* Nodetype::getLeft(){
	return mLeft;
}

void Nodetype::setRight(Nodetype* right){
	mRight = right;
}

Nodetype* Nodetype::getRight(){
	return mRight;
}

