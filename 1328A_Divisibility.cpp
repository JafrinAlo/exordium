#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        int  b;
        cin>>a;
        cin>>b;
        if((b-a%b)==b){cout<<0<<endl;}
        else
        cout<<b-a%b<<endl;

    }
}
