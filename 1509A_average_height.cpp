#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int store[n];

int count=1;
int initial=0;

        for(int i=0;i<n;i++){
            cin>>a[i];
        }


         for(int i=0;i<n;i++){
            if(a[i]%2!=0){
                    store[initial]=a[i];
                    initial++;
            }
              else if(a[i]%2==0){
                    store[n-count]=a[i];
                    count++;
           }
            }

            for(int i=0;i<n;i++){

                cout<<store[i]<<" ";
            }
            cout<<endl;

        }


}
