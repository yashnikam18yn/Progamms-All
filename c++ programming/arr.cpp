#include<iostream>
using namespace std;

int main()
{
   int a[4]={1,2,3,4};
   int j;

    cout<<a[0];
    cout<<a[1];
    cout<<a[2];
    cout<<a[3];
 
    cout<<"Your array is:"<<endl;

    for(j=0;j<4;j++)
    {
        cout<<a[j];
    }

    return 0;
}