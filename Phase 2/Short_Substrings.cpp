#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;

        cout << s[0];
        for (int i = 1; i < s.length(); i += 2)
        {
            cout << s[i];
        }
        cout <<"\n";
    }
    return 0;
}


// fumbled very badly at 1st question of phase 2. Thought of the use of vector substring and many more but the question can only be done by this.