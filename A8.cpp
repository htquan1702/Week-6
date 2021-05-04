#include <iostream>
using namespace std;
int f[100];
bool c[100];
void f_(int n, int k, int e)
{
    for (int i = e; i < n; i++)
    if (c[i] == true)
      {
            c[i] = false;
            f[k] = i + 1;
            cout << "[ ";
            for (int j = 0; j <= k - 1; j++) cout << f[j] << ", ";
            cout << f[k] << " ]" << endl;
            f_(n, k + 1, i + 1);
            c[i] = true;
       }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < 100; i++) c[i] = true;
    f_(n, 0, 0);
    return 0;
}
