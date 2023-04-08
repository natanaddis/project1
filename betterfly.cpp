#include <iostream>
using namespace std;

int main() {
    int n = 9;
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};

//Upper Section
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<=i; ++j)
        {
            cout<<arr[j]<<" ";
        }
        for(int k=n-1; k>=i; --k)
        {
            cout<<"  ";
        }
        for(int a=n-1; a>i ;--a)
        {
            cout<<"  ";
        }
        for(int b=i; b>=0; --b)
        {
            cout<<arr[b]<<" ";
        }
        cout<<endl;
    }
//Middle Section
    for(int i = n; i<=n; ++i)
    {
        for(int j=0; j<i; ++j)
        {
            cout<<arr[j]<<" ";
        }
        for(int j=n;j>=0;--j)
        {
            cout<<arr[j]<<" ";
        }
         cout<<endl;
    }
//Lower Section
    for(int i = n;i>0;--i)
    {
        for(int j=0; j<i; ++j)
        {
            cout<<arr[j]<<" ";
        }
        for(int k=0; k<=n-i ;++k)
        {
            cout<<"  ";
        }
        for(int a=0; a<n-i; ++a)
        {
            cout<<"  ";
        }
        for(int b=i-1; b>=0; --b)
        {
            cout<<arr[b]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
