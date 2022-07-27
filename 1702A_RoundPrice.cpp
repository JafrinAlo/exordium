#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string m;
        cin>>m;

       long num,tenPower;
       int power;
        power=m.length()-1;
        num=stoi(m);

        tenPower=pow(10,power);
        //cout<<m<<" "<<num<<endl;
        int ans;
        ans=num-tenPower;
        cout<<ans<<endl;

    }
}
