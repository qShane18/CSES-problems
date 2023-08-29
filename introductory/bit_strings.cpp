#include<iostream>
using namespace std;

int main() {
    unsigned long long n;
    const unsigned int M = 1000000007;
    cin >> n;
    unsigned long long res = 1;
    while(n--) {
        res = (res * 2) % M;
    }
    cout << res;
    return 0;
}
