#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n>0)
    {
        int a,count=0;
        cin>>a;
        int arr[a],j=0;
        while(j<a)
        {
            cin>>arr[j];
            j++;
        }
        sort(arr,arr+a);
        int k=1;
        j=0;
        while(j<a)
        {
            if(arr[j]==arr[k])
            {
                count++;
                k++;
            }
            else
            {
                j++;
                k=j+1;
            }
        }
        cout<<count<<endl;
        n--;
    }
}