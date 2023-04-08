#include <iostream>
using namespace std;

int main() {
    int n = 9;
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};

    //The Upper part
    for(int i = n; i>=0; --i)
    {
        cout<<"\t";
        for(int j=i; j < n; ++j)
        {
            cout<<"  ";
        }
        for(int k=i; k>=0; --k)
        {
            cout<<arr[k]<<" ";
        }
        for(int a=1; a <= i; ++a)
        {
            cout<<arr[a]<<" ";
        }
        cout<<endl;
    }
    //Lower part
    for(int i = 1; i<=n;++i)
    {
        cout<<"\t";
        for(int j = n; j>i; --j)
        {
            cout<<"  ";
        }
        for(int k = i; k>=0;--k)
        {
            cout<<arr[k]<<" ";
        }
        for(int a =1; a<=i;++a)
        {
            cout<<arr[a]<<" ";
        }
        cout<<endl;

    }

    return 0;
}
