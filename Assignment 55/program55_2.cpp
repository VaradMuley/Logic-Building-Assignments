#include <iostream>
using namespace std;

template <class T>
T Subtraction(T No1, T No2)
{
    T Ans;

    Ans = No1 - No2;

    return Ans;
}

int main()
{
    int iRet = 0;

    iRet = Subtraction(20, 10);
    cout << iRet << "\n";

    float fRet = 0.0f;
    fRet = Subtraction(20.5f, 10.3f);
    cout << fRet << "\n";

    return 0;
}
