#include<iostream>
using namespace std;
int main()
{
    int a[10],sum=0;
    cout<<"Enter 10 numbers "<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<"Sum of all 10 numbers if array is = "<<sum;
    return 0;
}
