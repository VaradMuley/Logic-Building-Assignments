#include <iostream>
using namespace std;

template <class T>
T Division(T No1, T No2)
{
    if(No2 == 0)
    {
        return 0;
    }

    return No1 / No2;
}

int main()
{
    int iRet = 0;

    iRet = Division(20, 5);
    cout << iRet << "\n";

    float fRet = 0.0f;
    fRet = Division(20.5f, 5.0f);
    cout << fRet << "\n";

    return 0;
}
