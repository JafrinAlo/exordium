#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long n,m;
        cin>>n>>m;
        if((n%2==0 && m%2==0)||(n%2!=0 && m%2!=0))cout<<"Tonya"<<endl;
        else
            cout<<"Burenka"<<endl;
    }
}
