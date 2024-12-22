#include <iostream>
using namespace std;

// print 1 to N using recursion
void print1toN(int i, int n) {
    if(i > n) {
        return;
    }
    cout << i << " ";
    print1toN(i + 1, n);
}

int main() {
    int n;
    cin >> n;
    print1toN(1, n);
    return 0;
}
