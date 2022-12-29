#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int n1,m;
        cin>>n1>>m;
        int arr[n1];
        for(int j=0;j<n1;j++)
        {
            cin>>arr[j];
        }
        int max=0;
        for(int j=0;j<n1;j++)
        {
            int start=arr[j]-1;
            int end=m-arr[j];
            if(start>=end)
            {
                max=max+start;
            }
            else if(start<end)
            {
                max=max+end;
            }
        }
        cout<<max<<endl;
    }
}