#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int trainers;
        cin>>trainers;
        vector <int> ground;
        vector <int> water;
        for(int j=0;j<trainers;j++)
        {
            int g;
            cin>>g;
            ground.push_back(g);
        }
        for(int j=0;j<trainers;j++)
        {
            int g;
            cin>>g;
            water.push_back(g);
        }
        //int j=0;
        for(int j=0;j<trainers;j++)
        {
            for(int k=j+1;k<trainers;k++)
            {
                if(ground[j]>ground[k] && water[j]>water[k])
                {
                    ground.erase(ground.begin()+k);
                    water.erase(water.begin()+k);
                    break;
                }
                else if(ground[j]<ground[k] && water[j]<water[k])
                {
                    ground.erase(ground.begin()+j);
                    water.erase(water.begin()+j);
                    break;
                }
            }
        }
        ground.erase(remove(ground.begin(),ground.end(),0),ground.end());
        water.erase(remove(water.begin(),water.end(),0),water.end());
        cout<<ground.size()<<endl;
    }
}