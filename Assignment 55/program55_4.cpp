#include <iostream>
using namespace std;

template <class T>
void Swap(T &No1, T &No2)
{
    T temp;
    temp = No1;
    No1 = No2;
    No2 = temp;
}

int main()
{
    int a = 10, b = 20;
    Swap(a, b);
    cout << a << " " << b << endl;

    float x = 3.5f, y = 7.8f;
    Swap(x, y);
    cout << x << " " << y << endl;

    return 0;
}
