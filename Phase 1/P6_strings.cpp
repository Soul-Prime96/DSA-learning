#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    int up = 0, down = 0;
    string s;
    cin >> s;
    for (char c : s)
    {
        if (c >= 'A' && c <= 'Z')
            up++;
        else
            down++;
    }
    if (up > down)
    {
        for (char &c : s)
        {
            c = toupper(c);
        }
    }
    else
    {
        for (char &c : s)
        {
            c = tolower(c);
        }
    }
    cout << s << '\n';

    return 0;
}