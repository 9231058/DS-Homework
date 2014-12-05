// In The Name Of God
// ========================================
// * File Name : Agency.c
// 
// * Creation Date : 05-12-2014
//
// * Last Modified : Sat 06 Dec 2014 12:48:03 AM IRST
//
// * Created By : Parham Alvani (parham.alvani@gmail.com)
// =======================================
#include <string>

#include "Agency.h"

Agency::Agency(std::string name, int id){
	mName = name;
	mId = id;
}

Agency::Agency(){
	mName = "NO_NAME";
	mId = -1;
}

Agency::Agency(const Agency& org){
	mName = org.mName;
	mId = org.mId;
}

std::string Agency::getName() const{
	return mName;
}

void Agency::setName(std::string name){
	mName = name;
}

int Agency::getId() const{
	return mId;
}

void Agency::setId(int id){
	mId = id;
}

std::ostream& operator <<(std::ostream &os, const Agency &agency){
	os << "Name: " << agency.getName() << ", ID: " << agency.getId();
	return os;
}
