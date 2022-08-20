#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int i;
    int sum=0;
    for(i=0;i<=9;i++)
    {
        cout<<"enter number -> "<<endl;
        cin>>a[i];
    }
    for(i=0;i<=9;i++)
    {
        sum+=a[i];
    }
    cout<<"sum is ="<<sum<<endl;
}