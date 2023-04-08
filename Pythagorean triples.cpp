#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    cout<<"side1"<<"\t"<<"side2"<<"\t"<<"hypotenuse"<<endl;
    
    for(int side1=1;side1<=100;++side1)
    {
        for(int side2=1;side2<=100;++side2)
        {
            for(int hypotenuse =1;hypotenuse<=100;++hypotenuse)
            {
                if(pow(side1,2)+pow(side2,2)==pow(hypotenuse,2))
                {
                    cout<<side1<<"\t"<<side2<<"\t"<<hypotenuse;
                    cout<<endl;
                }
            }
        }
    }
    return 0;
}