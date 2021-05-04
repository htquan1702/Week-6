#include <iostream>

using namespace std;

long F(int n) 
{
 if (n == 0) return 0;
 if (n == 1) return 1;
 return F(n-1) + F(n-2);
}
int main()
{
    int n;
    cin >> n;
    cout << F(n) << endl;
    int f[1000];
    f[1] = 1;
    f[2] = 1;
    for (int i = 3;i <= n;i++) f[i] = f[i - 1] + f[i - 2];
    cout << f[n];
    return 0;
}
