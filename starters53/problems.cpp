#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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
            string b;
            cin>>b;
            for(int k=0;k<b.length();k++)
            {
                if(b[k]=='1' || b[k]=='2'||b[k]=='3'||b[k]=='4'||b[k]=='5')
                {
                    e.push_back(b[k]);
                }
            }
            if(j==1)
            {
                int c=1,count=0;

                for(int l=0;l<e.size();l++)
                {
                    if(std::find(e.begin(),e.end(),c)!=e.end())
                    {
                        count++;
                    }
                    c++;

                }
                if(count==5)
                {
                    cout<<"YES"<<endl;
                    break;
                }
                else
                {
                    count=0;
                }
            }
        }
    }
}