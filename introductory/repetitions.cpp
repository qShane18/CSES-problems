#include<iostream>
#include<string>
using namespace std;

int main() {
    string char_line;
    cin >> char_line;

    unsigned int l = char_line.length();
    unsigned int count = 1;
    unsigned int max = 1;

    for(unsigned int i = 0; i <= l - 1; i++)
    {
        if(count > max)
            max = count;
        if(char_line[i] == char_line[i + 1])
            count++;
        else
            count = 1;
    }

    cout << max;
    return 0;
}
