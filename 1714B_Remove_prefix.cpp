#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        set<int> st;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int i;
        for(i=n-1;i>=0;i--){
            if(st.find(v[i])!=st.end())break;
            else
                st.insert(v[i]);
        }
        int ans=i+1;
        printf("%d \n",ans);
    }
}


/*int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        int count=0;
       // int num=0;

        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(int i=n-1;i>=0;i--){
           int num=count+1;
           // if(count<n) break;
            for(int j=i-1;j>=0;j--){
                     //num++;
                     //cout<<"i: "<<i<<" j: "<<j<<endl;
                if(a[i]==a[j]){
                    if(count<num)
                    {
                        //cout<<"i: "<<i<<" "<<a[i]<<" j: "<<j<<" "<<a[j]<<endl;
                        num=j+1;
                        if(num>count){
                        count=num;
           // cout<<"count: "<<count<<endl;
                        break;}
                    }

                }
            }

        }        // cout<<"count out of for loop: "<<count<<endl;

        printf("%d \n",count);
    }
}
*/
