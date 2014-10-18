#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char* argv[]){
	int number;

	cin >> number;
	
	stack <short> d_to_b;

	do{
		d_to_b.push(number % 2);
		number /= 2;
	}while(number != 0);
	
	while(!d_to_b.empty()){
		cout << d_to_b.top();
		d_to_b.pop();
	}
	cout << endl;
}
