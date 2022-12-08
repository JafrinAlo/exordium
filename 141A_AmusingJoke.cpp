#include<bits/stdc++.h>
using namespace std;

string sortString(string &str)
{
    sort(str.begin(), str.end());
    return str;
}

int main()
{
    string s1, s2,s3;
    cin>>s1>>s2>>s3;

    string s12=s1+s2;

    string str12=sortString(s12);
    string str3=sortString(s3);

    //cout<<str12<<endl;
    //cout<<str3<<endl;

    if(str12==str3){
        cout<<"YES";
    }
    else
        cout<<"NO";

        return 0;
}
