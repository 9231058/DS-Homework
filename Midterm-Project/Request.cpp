// In The Name Of God
// ========================================
// * File Name : Request.cpp
// 
// * Creation Date : 08-12-2014
//
// * Last Modified : Mon 08 Dec 2014 08:55:26 AM IRST
//
// * Created By : Parham Alvani (parham.alvani@gmail.com)
// =======================================
#include "Request.h"
#include "Service.h"

#include <ctime>
#include <string>
#include <iostream>

Request::Request(const Service& service, const std::string& username){
	mService = service;
	mUsername = username;
	mTime = time(NULL);
}

bool Request::operator<(const Request& r)const{
	if(mTime < r.mTime)
		return true;
	return false;
}
bool Request::operator>(const Request& r)const{
	if(mTime > r.mTime)
		return true;
	return false;
}
bool Request::operator==(const Request& r)const{
	if(mTime == r.mTime)
		return true;
	return false;
}

std::ostream& operator<<(std::ostream& os, const Request& r){
	os << "User: " << r.mUsername << std::endl;
	os << "Time: " << r.mTime << std::endl;
	os << "Service: " << r.mService.getName() << std::endl;
	return os;
}
