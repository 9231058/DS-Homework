// In The Name Of God
// ========================================
// * File Name : Service.h
// 
// * Creation Date : 05-12-2014
//
// * Last Modified : Mon 08 Dec 2014 11:50:53 PM IRST
//
// * Created By : Parham Alvani (parham.alvani@gmail.com)
// =======================================
#pragma once

#include <string>
#include <iostream>

class Service{
	private:
		std::string mName;
		std::string mModel;
		std::string mCostumerComment;
		std::string mTechnicalComment;
		int mRunTime;
		int mCost;
	public:
		Service(std::string name);
		Service();
		Service& operator=(const Service& orig);
		std::string getName() const;
		void setName(std::string name);
		std::string getModel() const;
		void setModel(std::string model);
		std::string getCostumerComment() const;
		void setCostumerComment(std::string costumerComment);
		std::string getTechnicalComment() const;
		void setTechnicalComment(std::string technicalComment);
		int getRunTime() const;
		void setRunTime(int runTime);
		int getCost() const;
		void setCost(int cost);
		bool operator==(const Service& service) const;
		
		friend std::ostream& operator<<(std::ostream& os, const Service& service);

};
