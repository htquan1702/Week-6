#include <iostream>

using namespace std;
void test(int f[])
{
    cout << &f[0];
}
int main()
{
    int f[100];
    cout << &f[0] << endl;
    test(f);
    return 0;
}
