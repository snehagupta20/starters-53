#include <iostream>
using namespace std;
int  main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        int c=a-b;
        if(c>=b)
        {
            cout<<b<<endl;
        }
        else if(c<b)
        {
            cout<<c<<endl;
        }
    }
}