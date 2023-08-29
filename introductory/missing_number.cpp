#include<iostream>
using namespace std;

int main() {
    unsigned long long n, t;
    cin >> n;
    bool *arr = new bool[n + 1] {0};
    int N = n - 1;
    while(N--) {
        cin >> t;
        arr[t] = 1;
    }
    
    unsigned long long i;
    for(i = 1; i <= n; i++)
        if(!arr[i])
            cout << i;

    return 0;
}
