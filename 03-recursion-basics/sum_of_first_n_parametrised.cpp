#include <iostream>
using namespace std;

//sum of first N numbers (functional recursion)
void printSum(int i, int sum){
	if(i<1){
		cout << sum;
		return;
	}
	printSum(i-1, sum+i);
}


int main(){
	int n;
	cin >> n;
	printSum(n,0);
}