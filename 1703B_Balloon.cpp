#include<iostream>
#include<string>
using namespace std;

int main(){
    int t=0;
    int n=0;
    int single=0;
    int multi;
    int balloon;
    cin>>t;

    for(int i=0; i<t;i++){

                cin>>n;
                string s;
                cin>>s;

                 multi=1;
                 int visited=-1;
                for(int k=0; k<s.length();k++){

                        for(int h=k;h<s.length();h++){
                            if(s[k]==s[h+1] && s[k]!=visited)   {
                            multi++;//counts the number of elements occurring more than once
                            s[h+1]=visited;//for making sure one element is not counted more than once

                              }

                        }

                }

          balloon=multi+1+2*(s.length()-multi);//s.length()-multi ->gives us the number of elements that occurred once
          cout<<balloon<<"\n";
    }
}
