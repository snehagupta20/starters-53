#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        vector <int> e;
        for(int j=0;j<a;j++)
        {
            int b;
            cin>>b;
            e.push_back(b);
        }
        int c;
        cin>>c;
        vector <int> f;
        for(int j=0;j<c;j++)
        {
            int b;
            cin>>b;
            f.push_back(b);
        }
        for(int j=0;j<c;j++)
        {
            for(int k=0;k<a;k++)
            {
                if(f[j]==e[k])
                {
                    e.erase(e.begin()+k);
                }
            }
        }
        for(int j=0;j<a-c;j++)
        {
            cout<<e[j]<<" ";
        }
        cout<<endl;
    }
}