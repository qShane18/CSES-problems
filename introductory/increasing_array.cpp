#include<iostream>
using namespace std;

int main() {
    unsigned int n;
    cin >> n;
    
    
    unsigned int previous_numb;
    unsigned long long count = 0;
    unsigned int current_numb;

    cin >> current_numb;
    previous_numb = current_numb;
    n--;
    while(n--)
    {
        cin >> current_numb;
        if(current_numb < previous_numb)
        {
            count += (previous_numb - current_numb);
        }
        else
            previous_numb = current_numb;
    }

    cout << count;
    return 0;
}
