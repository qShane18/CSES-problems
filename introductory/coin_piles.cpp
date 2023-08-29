#include<iostream>
using namespace std;

int main() {
    long t; cin >> t;
    long a, b;
    while(t--) {
        cin >> a;
        cin >> b;

        if(a >= b) {
            if((2*b - a) % 3 == 0 && 2*b >= a)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else{
            if((2*a - b) % 3 == 0 && 2*a >= b)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}

