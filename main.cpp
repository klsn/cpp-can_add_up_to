#include <bits/stdc++.h>
using namespace std;

bool func(int n, int w, vector<int> &a){
	if (n==0 && w==0) return true;
	if (func(n-1, w, a)) return true;
	if (func(n-1, w-a.at(n-1), a)) return true;
	return false;
}

int main() {
	int n, w;
	cin >> n >> w;
	vector<int> a(n);
	for (int i=0;i<n;i++){
		cin >> a.at(i);
	}
	if (func(n, w, a)) cout << "yes" << endl;
	else cout << "no" << endl;
}
