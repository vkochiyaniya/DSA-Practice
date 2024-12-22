#include <iostream>
using namespace std;

//print factorial of N 
int fn(int n){
	if(n==0){
		return 1;
	}
	return n * fn(n-1);
}

int main(){
	int n;
	cin >> n;
	cout << fn(n);
}