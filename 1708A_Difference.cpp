#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        a[n]=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int count=0;
 for(int i=1;i<n;i++)
        {
            //cout<<a[i]<<" ";
            for(int j=0;j<1;j++){
                if(a[j]<=a[i]){
                    if(a[i]%a[j]==0)
                        {
                            count++;
                    }

                }
            }
        }
        //cout<<count<<endl;
        if(count==n-1)cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}




