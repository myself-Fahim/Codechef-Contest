#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,run[30],wic[30],sum[30];
    cin>>t;
    while(t--)
    {
        for(int i=0;i<22;i++)
        {
            cin>>run[i]>>wic[i];
            sum[i]=run[i]+(wic[i]*20);
        }
        int max=sum[0],index;
        for(int i=1;i<22;i++)
        {
            if(sum[i]>max)
            {
                max=sum[i];
                index=i;
            }
        }
        cout<<index+1<<endl;

    }

}