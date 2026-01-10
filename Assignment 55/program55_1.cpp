#include <iostream>
using namespace std;

template <class T>
T Addition(T No1, T No2)
{
    T Ans;

    Ans = No1 + No2;

    return Ans;
}

int main()
{
    int iRet = 0;

    iRet = Addition(10, 20);
    cout << iRet << "\n";

    float fRet = 0.0f;
    float fRet = Addition(10.5f, 20.3f);
    cout << fRet << "\n";

    return 0;
}
