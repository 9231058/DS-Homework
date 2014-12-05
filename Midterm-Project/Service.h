// In The Name Of God
// ========================================
// * File Name : Service.h
// 
// * Creation Date : 05-12-2014
//
// * Last Modified : Fri 05 Dec 2014 10:15:12 PM IRST
//
// * Created By : Parham Alvani (parham.alvani@gmail.com)
// =======================================
#pragma once

#include <string>

class Service{
	private:
		std::string mName;
		std::string mModel;
		std::string mCostumerComment;
		std::string mTechnicalComment;
		int mRunTime;
		int mCost;
	public:
		std::string getName();
		void setName(std::string name);
		std::string getModel();
		void setModel(std::string model);
		std::string getCostumerComment();
		void setCostumerComment(std::string costumerComment);
		std::string getTechnicalComment();
		void setTechnicalComment(std::string technicalComment);
		int getRunTime();
		void setRunTime(int runTime);
		int getCost();
		void setCost(int cost);
};
