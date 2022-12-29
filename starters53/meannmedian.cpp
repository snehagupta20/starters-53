#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    srand(time(NULL));
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        int d;
        d=b;
        a=(a*3)-d;
        int t=2000;
        while(t--)
        {
            int c=(rand()%2000+1)-1000;
            int e=(rand()%2000+1)-1000;
            if(c+e==a)
            {
                cout<<c<<" "<<d<<" "<<e<<" "<<endl;
                break;
            }
        }
        
    }
}