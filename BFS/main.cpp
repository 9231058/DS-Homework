// In The Name Of God
// ========================================
// * File Name : main.cpp
// 
// * Creation Date : 13-12-2014
//
// * Last Modified : Sat 13 Dec 2014 12:47:05 PM IRST
//
// * Created By : Parham Alvani (parham.alvani@gmail.com)
// =======================================
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

#define MAX 100

vector<int> v[MAX];
int color[MAX];

void BFS(int root){
	queue<int> Q;
	Q.push(root);
	color[root] = 1;
	while(Q.size() != 0){
		int start = Q.front();
		Q.pop();

		cout << start + 1 << endl;

		for(unsigned int i = 0; i < v[start].size(); i++){
			if(color[v[start][i]] == 0){
				color[v[start][i]] = 1;
				Q.push(v[start][i]);
			}
		}
		color[start] = 2;
	}
}

int main(int argc, char* argv[]){
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int v1, v2;
		cin >> v1 >> v2;
		v[v1 - 1].push_back(v2 - 1);
		v[v2 - 1].push_back(v1 - 1);
	}
	for(int i = 0; i < n; i++){
		if(color[i] == 0){
			cout << char(27) << "[0;" << 31 + (i % 10) << "m";
			BFS(i);
		}
	}
	cout << char(27) << "[0;0;0m";
}
