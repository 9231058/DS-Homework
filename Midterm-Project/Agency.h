// In The Name Of God
// ========================================
// * File Name : Agency.h
// 
// * Creation Date : 05-12-2014
//
// * Last Modified : Sat 06 Dec 2014 12:45:02 AM IRST
//
// * Created By : Parham Alvani (parham.alvani@gmail.com)
// =======================================
#pragma once

#include <string>
#include <iostream>

class Agency{
	private:
		std::string mName;
		int mId;
	public:
		Agency(std::string name, int id);
		Agency();
		Agency(const Agency& org);

		std::string getName() const;
		void setName(std::string);
		int getId() const;
		void setId(int id);

		friend std::ostream& operator <<(std::ostream &os, const Agency &agency);

};
