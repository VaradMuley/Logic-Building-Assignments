#include <iostream>
using namespace std;

template <class T>
T Max(T No1, T No2, T No3, T No4)
{
    T Max = No1;

    if(No2 > Max)
    {
        Max = No2;
    }
    if(No3 > Max)
    {
        Max = No3;
    }
    if(No4 > Max)
    {
        Max = No4;
    }
    return Max;
}

int main()
{
    cout << Max(10, 20, 30, 40) << "\n";
    cout << Max(10.5f, 20.3f, 15.8f, 40.2f) << "\n";

    return 0;
}
