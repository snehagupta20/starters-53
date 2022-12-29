#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b,x;
        cin>>a>>b>>x;
        if(a==b)
        {
            cout<<"YES"<<endl;
        }
        else if(a>b)
        {
            while(a>b)
            {
                a=a-x;
                b=b+x;
            }
            if(a==b)
            {
                cout<<"YES"<<endl;
            }
            else if(a<b)
            {
                cout<<"NO"<<endl;
            }
        }
        else if(a<b)
        {
            while(a<b)
            {
                a=a+x;
                b=b-x;
            }
            if(a==b)
            {
                cout<<"YES"<<endl;
            }
            else if(a>b)
            {
                cout<<"NO"<<endl;
            }
        }

    }
}