// In The Name Of God
// ========================================
// * File Name : Request.h
// 
// * Creation Date : 08-12-2014
//
// * Last Modified : Mon 08 Dec 2014 08:51:55 AM IRST
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
		Request(const Service& service, const std::string& username);
		bool operator<(const Request& r) const;
		bool operator>(const Request& r) const;
		bool operator==(const Request& r) const;

		friend std::ostream& operator<<(std::ostream& os, const Request& r);
};
