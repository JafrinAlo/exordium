#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    string s2;
    string s3;
    int countAdd12,countAdd3=0;
    int n12,n3=0;

    cin>>s1>>s2>>s3;
    string s12=s1.append(s2);

    set<char> str12;
    set<char> str3;
    set<char>::iterator itr;
    for(itr=str12.begin();itr<str12.end();itr++)
    {
        str12.insert(s12[i]);
        n12=n12+*itr;
    }

     for(itr=str3.begin();itr<str3.end();itr++)
    {
        str3.insert(s3[i]);
        n3=n3+*itr;
    }

    if((n12==n3)&& (s12-str12.size())==(s3-str3.size())){
            cout<<n1<<" "<<n2<<" "<<n3<<endl;
        cout<<"YES";
    }
    else
        cout<<"NO";
}
