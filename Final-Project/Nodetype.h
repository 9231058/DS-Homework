// In The Name Of God
// ========================================
// * File Name : Nodetype.h
// 
// * Creation Date : 12-12-2014
//
// * Last Modified : Fri 12 Dec 2014 09:56:28 PM IRST
//
// * Created By : Parham Alvani (parham.alvani@gmail.com)
// =======================================
class Nodetype{
	private:
		char mSymbol;
		int mFrequency;
		Nodetype* mLeft;
		Nodetype* mRight;
	public:
		Nodetype();
		Nodetype(char symbol, int frequency);
		void setSymbol(char symbol);
		char getSymbol();
		void setFrequency(int frequency);
		int getFrequency();
		void setLeft(Nodetype* left);
		Nodetype* getLeft();
		void setRight(Nodetype* right);
		Nodetype* getRight();
};
