#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        set <char> a;

        int day;
        day=1;

        for(int i=0; i<s.length(); i++)
        {

              a.insert(s[i]);

              if(a.size()>3){
                day++;
                a.clear();

                a.insert(s[i]);
              }
        }

        cout<<day<<endl;


    }
}
