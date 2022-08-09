//codeforces solution
#include<iostream>
using namespace std;

int main()
{
    string str;
    cin>>str;

    int ans=0;
    for(int i=0;i<str.length()-1;i++)
    {
         int count=-1;
        //cout<<i<<" "<<str[i]<<endl;
        for(int j=i;j<str.length();j++){
            if(str[i]==str[j])
            {
               // cout<<"i: "<<i<<" "<<str[i]<<" j: "<<j<<" "<<str[j]<<endl;
                count++;
                //cout<<"count: "<<count<<endl;
                //cout<<endl;
                //cout<<endl;
                if(count==6){
                        ans++;
                break;
                }
            }
           else if(str[i]!=str[j])
             {
                 break;
             }
        }
    }
   // if(ans>0)cout<<"YES ans: "<<ans<<endl;
   if(ans>0)cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
