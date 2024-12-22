#include <iostream>
using namespace std;



#include <iostream>
using namespace std;

//print N to 1 using recursion
void printNto1(int i, int n){
	if(i<1){
		return;
	}
	cout << i <<endl;
	printNto1(i-1, n);
}

main(){
	int n;
	cin >> n;
	printNto1(n, n);
	return 0;
}