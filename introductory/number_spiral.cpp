#include<iostream>
using namespace std;

void solve(unsigned long long row, unsigned long long col) {
    unsigned long long sqrNumb_pos = max(row, col);
    unsigned long long res;
    if(sqrNumb_pos % 2 == 0)
    {
        if(row >= col)
            res = sqrNumb_pos*sqrNumb_pos - col + 1;
        else 
            res = (sqrNumb_pos - 1)*(sqrNumb_pos - 1) + row;
    }
    else 
    {
        if(row >= col)
            res = (sqrNumb_pos - 1)*(sqrNumb_pos - 1) + col;
        else
            res = sqrNumb_pos*sqrNumb_pos - row + 1;
    }
    cout << res << "\n";
}

int main() {
    unsigned long long t, y, x;
    cin >> t;
    while(t--) {
        cin >> y >> x;
        solve(y, x);
    }
    return 0;
}
