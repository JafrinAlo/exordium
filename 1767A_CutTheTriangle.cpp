#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t;
    cin>>t;
    int count=0;
    while(t--)
    {
        int a,b,c,d,e,f;
        int temp=0;
        cin>>a>>b>>c>>d>>e>>f;
        if(a!=c && a!=e && c!=e) temp=1;
        else if(b!=d && b!=f && d!=f )temp=1;
        else temp=0;
        if(temp)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
