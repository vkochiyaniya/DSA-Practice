#include <iostream>
using namespace std;

//sum of first N numbers //funcational recursion
int printSum(int n){
	if(n==0){
		return 0;
	}
	return n + printSum(n-1);
}

int main(){
	int n;
	cin >> n;
	cout << printSum(n);
}