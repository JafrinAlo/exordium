#include<bits/stdc++.h>
using namespace std;

string tolow(string str){
    for(int i=0;i<str.length();i++){
        str[i]=tolower(str[i]);
    }
    return str;
}


int main()
{
    int n;
    cin>>n;
    cin.ignore ( std::numeric_limits<std::streamsize>::max(), '\n' );


    string s;
    set <char> a;
    getline(cin,s);
    string str;
    str=tolow(s);
   // cout<<str<<endl;
    for(int i=0; i<s.length(); i++)
    {
        if(str[i]>='a' && str[i]<='z')
            a.insert(str[i]);
    }
    if(a.size()==26)cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
