#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        float aliced,alicet,bobd,bobt;
        cin>>aliced>>alicet>>bobd>>bobt;
        float alices=aliced/alicet;
        float bobs=bobd/bobt;
        if(alices>bobs)
        {
            cout<<"Alice"<<endl;
        }
        else if(alices<bobs)
        {
            cout<<"Bob"<<endl;
        }
        else if(alices==bobs)
        {
            cout<<"Equal"<<endl;
        }
    }
}