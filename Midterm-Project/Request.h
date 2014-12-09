// In The Name Of God
// ========================================
// * File Name : Request.h
// 
// * Creation Date : 08-12-2014
//
// * Last Modified : Tue 09 Dec 2014 05:20:07 AM IRST
//
// * Created By : Parham Alvani (parham.alvani@gmail.com)
// =======================================
#pragma once

#include "Service.h"

#include <ctime>
#include <iostream>
#include <string>

class Request{
	private:
		Service mService;
		time_t mTime;
		std::string mUsername;
	public:
		Request();
		Request(const Service& service, const std::string& username);
		Request(const Request& orig);
		Request& operator=(const Request& orig);	
		bool operator<(const Request& r) const;
		bool operator>(const Request& r) const;
		bool operator<=(const Request& r) const;
		bool operator>=(const Request& r) const;
		bool operator==(const Request& r) const;

		friend std::ostream& operator<<(std::ostream& os, const Request& r);
};
