#include <bits/stdc++.h>
using namespace std;
int main()
{
    int leaf,b_orn,sm_orn,i,t;
    cin>>t;
    while(t--)
    {
        cin>>leaf>>b_orn>>sm_orn;
        if(leaf>b_orn)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int div=(sm_orn/3);
            if(div<leaf && ((leaf-div)*2)>((b_orn-div)))
                {
                  cout<<"NO"<<endl;
                 }

           else
              {
                cout<<"YES"<<endl;
              }

    }

}

}

