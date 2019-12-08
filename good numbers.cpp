#include <bits/stdc++.h>
using namespace std;
vector <long long int> v;
int main()
{
    long long int a=0;
    for(int i=0;i<(1<<18);i++)
    {
        for(int j=0;j<18;j++)
        {
            if(i&(1<<j))
                a=a+pow(3,j);
        }
        v.push_back(a);
        a=0;
    }
    sort(v.begin(),v.end());
    int q;
    cin>>q;
    vector <long long int> :: iterator it;
    while(q--)
    {
        cin>>a;
        it=lower_bound(v.begin(),v.end(),a);
        cout<<*it<<endl;
    }
}
