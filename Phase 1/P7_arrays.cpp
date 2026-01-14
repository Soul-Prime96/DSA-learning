// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> v[i];
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (v[j] == i)
//             {
//                 cout << j  << ' ';
//             }
//         }
//     }

//     return 0;
// }


// above ans is wrong because of wrong index and it had time complexity of O(n^2) but it can be done by O(n)

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> ans(n + 1);  // 1-based indexing

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        ans[x] = i;
    }

    for (int i = 1; i <= n; i++) {
        cout << ans[i] << ' ';
    }

    return 0;
}
