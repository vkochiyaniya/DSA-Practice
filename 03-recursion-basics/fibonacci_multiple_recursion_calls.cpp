#include <bits/stdc++.h>
using namespace std;

int fn(int n){
	if(n<=1) return n;
	int last = fn(n-1);
	int secondlast = fn(n-2);

	return last + secondlast;
}

int main(){
	int n;
	cin >> n;
	cout << fn(n);
	return 0;
}