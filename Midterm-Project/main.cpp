// In The Name Of God
// ========================================
// * File Name : main.cpp
// 
// * Creation Date : 05-12-2014
//
// * Last Modified : Mon 08 Dec 2014 08:46:56 AM IRST
//
// * Created By : Parham Alvani (parham.alvani@gmail.com)
// =======================================
#include "List.h"
#include "MaxHeap.h"
#include "Agency.h"
#include "Request.h"

#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]){
	List<Agency> agency;
	MaxHeap<Request> request;
	while(true){
		string command;
		cout << "> ";
		std::getline(cin, command);
		
		cerr << command << endl;
		
		istringstream ci(command);
		if(command.find("Add new agency") != string::npos){
			int id;
			string name;
			
			ci.ignore(std::numeric_limits<std::streamsize>::max(), ' ');	// Just seek after "Add new agency" in stream	
			ci.ignore(std::numeric_limits<std::streamsize>::max(), ' ');
			ci.ignore(std::numeric_limits<std::streamsize>::max(), ' ');
			ci >> id >> name;
			
			cerr << id << " " << name << endl;

			agency.push_back(Agency(name, id));
		}else if(command.find("Exit") != string::npos){
			exit(0);
		}else if(command.find("List agency") != string::npos){
			cout << agency << endl;
		}else if(command.find("List services") != string::npos){
		}else if(command.find("List services from") != string::npos){
			string name;
			
			ci.ignore(std::numeric_limits<std::streamsize>::max(), ' ');	// Just seek after List services from" in stream	
			ci.ignore(std::numeric_limits<std::streamsize>::max(), ' ');
			ci.ignore(std::numeric_limits<std::streamsize>::max(), ' ');
			ci >> name;
			
			cerr << name << endl;
		}
	}
}
