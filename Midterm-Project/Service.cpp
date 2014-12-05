// In The Name Of God
// ========================================
// * File Name : Service.c
// 
// * Creation Date : 05-12-2014
//
// * Last Modified : Fri 05 Dec 2014 10:40:17 PM IRST
//
// * Created By : Parham Alvani (parham.alvani@gmail.com)
// =======================================
#include <string>

#include "Service.h"

std::string Service::getName(){
	return mName;
}

void Service::setName(std::string name){
	mName = name;
}

std::string Service::getModel(){
	return mModel;
}

void Service::setModel(std::string model){
	mModel = model;
}

std::string Service::getCostumerComment(){
	return mCostumerComment;
}

void Service::setCostumerComment(std::string costumerComment){
	mCostumerComment = costumerComment;
}

std::string Service::getTechnicalComment(){
	return mTechnicalComment;
}

void Service::setTechnicalComment(std::string technicalComment){
	mTechnicalComment = technicalComment;
}

int Service::getRunTime(){
	return mRunTime;
}

void Service::setRunTime(int runTime){
	mRunTime = runTime;
}

int Service::getCost(){
	return mCost;
}

void Service::setCost(int cost){
	mCost = cost;
}
