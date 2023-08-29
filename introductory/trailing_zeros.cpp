#include<iostream>
using namespace std;

int main() {
    int count = 0;
    long n;
    cin >> n;

    for(int i = 5; n / i >= 1; i *= 5)
        count += n / i;
    cout << count;
    return 0;
}
