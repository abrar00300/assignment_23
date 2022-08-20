#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter value for a and b =\n";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Value after swap is a="<<a<<" b="<<b;
    return 0;
}
