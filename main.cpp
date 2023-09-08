#include <iostream>
using namespace std;

int factorial(int a)
{
    int x = a;
    for (int i = 1; i < a; i++)
        x = i * x;
    return x;
}
int main()
{
    int a;
    cin >> a;
    if (a == 0)
        cout << 1;
    else
        cout << factorial(a);
}
