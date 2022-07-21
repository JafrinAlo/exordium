#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x;
        int a;
        int b;
        int c;
        cin>>x;
        cin>>a;
        cin>>b;
        cin>>c;

        switch(x){
        case 3:
            if(c!=0){
                switch(c){
                case 1:
                    if(a!=0){cout<<"YES"<<endl;  break;
                                    }
                                    else cout<<"NO"<<endl; break;
                case 2:
                    if(b!=0){cout<<"YES"<<endl;  break;
                                    }
                                    else cout<<"NO"<<endl; break;
            }}
            else
                cout<<"NO"<<endl;
            break;

         case 2:
            if(b!=0){
                                switch(b){
                case 1:
                    if(a!=0){cout<<"YES"<<endl;  break;
                                    }
                                    else cout<<"NO"<<endl; break;
                case 3:
                    if(c!=0){cout<<"YES"<<endl;  break;
                                    }
                                    else cout<<"NO"<<endl; break;
            }
            }
            else
                cout<<"NO"<<endl;
            break;

         case 1:
            if(a!=0){                switch(a){
                case 3:
                    if(c!=0){cout<<"YES"<<endl;  break;
                                    }
                                    else cout<<"NO"<<endl; break;
                case 2:
                    if(b!=0){cout<<"YES"<<endl;  break;
                                    }
                                    else cout<<"NO"<<endl; break;
            }

            }
            else
                cout<<"NO"<<endl;
            break;
        }

    }
}
