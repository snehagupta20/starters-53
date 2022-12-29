#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int n1;
        cin>>n1;
        int arr[n1],min=0,max=0;
        for(int j=0;i<n1;j++)
        {
            cin>>arr[j];
        }
        int n2=n1*(n1+1)/2;
        int subarr[n2],m=0;
        for(int l=0;l<n1;l++)
        {
            for(int j=l;j<n1;j++)
            {
                for(int k=l;k<=j;k++)
                {
                    if(arr[k]>max)
                    {
                        max=arr[k];
                    }
                    if(arr[k]<min)
                    {
                        min=arr[k];
                    }
                }
                subarr[m]=min*max;
                m++;
                min=0;
                max=0;
            }
        }
        min=0;
        max=0;
        for(int l=0;l<n2;l++)
        {
            if(subarr[l]>max)
            {
                max=arr[l];
            }
            if(subarr[l]<min)
            {
                min=arr[l];
            }
        }
        cout<<min<<" "<<max<<endl;
    }
}