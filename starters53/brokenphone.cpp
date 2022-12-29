#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>> a >> b;
        if(a<b)
        {
            cout<<"REPAIR"<<endl;
        }
        else if(a>b)
        {
            cout<<"NEW PHONE"<<endl;
        }
        else if(a==b)
        {
            cout<<"ANY"<<endl;
        }

    }
}