#include <iostream>
using namespace std;

//print linearly from 1 to N but by backtrack
void print1toN(int i, int n){
	if(i<1){
		return;
	}
	print1toN(i-1, n);
	cout << i;
}

main(){
	int n;
	cin >> n;
	print1toN(n,n);
}