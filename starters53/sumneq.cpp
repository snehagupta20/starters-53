#include <iostream>
using namespace std;
int main()
{
    int n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        int arr[a],prod=1;
        for(int j=0;j<a;j++)
        {
            cin>>arr[j];
            prod=prod*arr[j];
        }
        if(prod>=0)
        {
            cout<<"0"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
    }
}