#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        int n,k;
        cin>>n >> k;
        if(n>k)
        {
            if(n%k==0)
            {
                cout<<"YES"<<endl;
            }
            else if(n%k!=0)
            {
                int m=n-k;
                if(m>=k)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }
        else if(n<k)
        {
            cout<<"NO"<<endl;
        }
        else if(n==k)
        {
            if(n==1 && k==1)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}