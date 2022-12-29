#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int arr[4];
        int count=0;
        for(int j=0;j<4;j++)
        {
            cin>>arr[j];
        }
        for(int j=0;j<4;j++)
        {
            if(arr[j]==1)
            {
                cout<<"OUT"<<endl;
                count++;
                break;
            }
        }
        if(count==0)
        {
            cout<<"IN"<<endl;
        }
    }
}