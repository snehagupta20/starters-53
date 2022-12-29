#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int balance,pay,tax,month;
        cin>>balance>>pay>>tax>>month;
        cout<<(balance)+((pay-tax)*month)<<endl;
    }
}