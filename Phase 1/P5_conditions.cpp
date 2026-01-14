#include <iostream>
using namespace std;
int main()
{
    int n, x, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int p = 0, q = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> x;
            if (x == 1)
            {
                p++;
            }
            else if (x == 0)
            {
                q++;
            }
        }
        if (p > q)
            ans++;
    }
    cout << ans << '\n';
    return 0;
}

// gpt solution
// #include <iostream>
// using namespace std;

// int main() {
//     int n, ans = 0;
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         int sum = 0, x;
//         for (int j = 0; j < 3; j++) {
//             cin >> x;
//             sum += x;
//         }
//         if (sum >= 2) ans++;
//     }

//     cout << ans << '\n';
//     return 0;
// }
