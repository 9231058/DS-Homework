#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char* argv[]){
	stack <char> p;
	stack <char> b;
	stack <char> a;

	bool notmatch = false;
	char c;
	while((c = cin.get()) != '\n'){
		if(notmatch){
			continue;
		}

		switch(c){
			case '(':
				p.push(c);
				break;
			case '[':
				b.push(c);
				break;
			case '{':
				a.push(c);
				break;
			case ')':
				if(p.top() != '('){
					notmatch = true;
				}
				p.pop();
				break;
			case ']':
				if(b.top() != '['){
					notmatch = true;
				}
				b.pop();
				break;
			case '}':
				if(a.top() != '{'){
					notmatch = true;
				}
				a.pop();
				break;
		}
	}
	if(notmatch || p.size() != 0 || b.size() != 0 || a.size() != 0){
		cout << "Not match" << endl;
	}
	else{
		cout << "Match" << endl;
	}
}
