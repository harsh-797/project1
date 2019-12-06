#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q,n,e=0;
    cin>>q;
   w: while(q--)
    {
        cin>>n;
        vector <int> v(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n-1;i++)
        {
            if(v[i+1]-v[i]==1)
            {
                cout<<"2"<<endl;
                goto w;
            }
        }
        cout<<"1"<<endl;
    }
}
