#include<iostream>
#include<vector>
using namespace std;


void solve(int n) {
    if(n == 1)
    {
        cout << 1;
        return;
    }
    else if(n < 4)
    {
        cout << "NO SOLUTION";
        return;
    }

    
    // the very first permutation
    vector<int> odd;
    vector<int> even;
    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
            even.push_back(i);
        else
            odd.push_back(i);
    }

    // print out
    for(auto i : even)
        cout << i << " ";
    for(auto i : odd)
        cout << i << " ";

}

int main() {
    int n;
    cin >> n;
    solve(n);
}
