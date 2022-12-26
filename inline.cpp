#include<iostream>
//#include<conio.h>
using namespace std;
inline int fun(int a,int b)
{
    return (a>b)?a:b;
}
int main()
{
    int s;
    s=fun(10,20);
    cout<<"maximum"<<s;
}
