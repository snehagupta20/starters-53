#include <iostream>
#include <vector>
using namespace std;
int divxtwo(int a,int b)
{
    for(int j=0;j<b;j++)
        {
            for(int k=1;k<=a;k++)
            {
                if(a%k==0)
                {
                    e.push_back(k*a);
                }
            }
        }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        vector <int> e;
        for(int j=0;j<b;j++)
        {
            for(int k=1;k<=a;k++)
            {
                if(a%k==0)
                {
                    e.push_back(k*a);
                }
            }
        }
        int sum=0;
        for(int j=0;j<e.size();j++)
        {
            sum=sum+e[j];
        }
        cout<<sum;
    }
}