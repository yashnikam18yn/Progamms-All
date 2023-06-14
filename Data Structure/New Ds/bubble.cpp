#include<iostream>
using namespace std;

int main()
{
    int n,i,a[n];
    cout<<"Enter An Size of An Array: "<<endl;
    cin>>n;

    cout<<"Enter Element into array: "<<endl;

    for(i=0;i<=n-1;i++)
    {
       cin>>a[i];
    }
    cout<<"Your Unsorted Array is:"<<endl;

    for(i=0;i<=n-1;i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}