#include<iostream>
#include<string>
using namespace std;

string tolow(string str){
    for(int i=0;i<3;i++){
        str[i]=tolower(str[i]);
    }
    return str;
}


int main()
{
   int t;
   cin>>t;
   for(int i=0; i<t;i++){
    string s;
    cin>>s;
    if(tolow(s)=="yes")cout<<"YES\n";//converting the input to lower case alphabet for comparison
    else
        cout<<"NO\n";
   }

}


