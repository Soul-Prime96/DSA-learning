// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, x;
//     cin >> n >> x;
//     int a[n];
//     for (int k = 0; k < n; k++)
//     {
//         cin >> a[k];
//     }
//     int i = 0, j = n-1, ans = 0, e;
//     while (i < j)
//     {
//         if (a[i] + a[j] < x)
//             i++;

//         else if (a[i] + a[j] > x)
//             j--;

//         else if (a[i] + a[j] == x && a[i] == a[j])
//         {
//             e = ((j - i + 1) * (j - i)) / 2;
//             ans += e;
//             break;
//         }
//         else if (a[i] + a[j] == x)
//         {
//             int c = 1, d = 1;
//             while (a[i] == a[i + 1] || a[j] == a[j + 1])
//             {
//                 if (a[i] == a[i + 1])
//                 {
//                     c++;
//                     i++;
//                 }
//                 if (a[j] == a[j + 1])
//                 {
//                     d++;
//                     j--;
//                 }
//             }
//             ans += (c * d);
//         }
//     }
//     cout<<ans;
//     return 0;
// }

// I made very fatale error in this program


#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int i = 0, j = n - 1;
    long ans = 0;

    while(i < j) {
        int sum = a[i] + a[j];

        if(sum < x) {
            i++;
        }
        else if(sum > x) {
            j--;
        }
        else {
            // sum == x
            if(a[i] == a[j]) {
                long k = j - i + 1;
                ans += (k * (k - 1)) / 2;
                break;
            }
            else {
                long c = 1, d = 1;

                while(i + 1 < j && a[i] == a[i + 1]) {
                    c++;
                    i++;
                }
                while(j - 1 > i && a[j] == a[j - 1]) {
                    d++;
                    j--;
                }

                ans += c * d;
                i++;
                j--;
            }
        }
    }

    cout << ans;
    return 0;
}
