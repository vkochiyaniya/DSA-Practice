#include <iostream>
using namespace std;

// print name n times using recursion
void printName(int cnt, int n) {
    if (cnt > n) {
        return;
    }
    cout << "vishal" << endl;
    printName(cnt + 1, n);
}

int main() {
    int n;
    cin >> n;
    printName(1, n);
    return 0;
}
