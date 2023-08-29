#include<iostream>
#include<vector>
#include<vector>
using namespace std;


void solve(unsigned long long n)
{
    unsigned long long sum = n*(n + 1)/2;

    if(sum % 2 == 1)
        cout << "NO\n";
    else {
        vector<unsigned long long> SecondSet;
        vector<unsigned long long> FirstSet;
        cout << "YES\n";
        unsigned long long mid = sum / 2;
        
        for(unsigned long long i = n; i >= 1; i--) {
            if(i <= mid) {
                FirstSet.push_back(i);
                mid = mid - i;
            }
            else {
                SecondSet.push_back(i);
            }
        }
        cout << FirstSet.size() << "\n";
        for(auto i : FirstSet)
            cout << i << " ";
        cout << "\n" << SecondSet.size() << "\n";
        for(auto i : SecondSet)
            cout << i << " ";
    }
}

int main() {
    unsigned long long n;
    cin >> n;

    solve(n);

    return 0;
}
