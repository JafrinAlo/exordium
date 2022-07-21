#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
     int high;
    int low;
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
        high=a[0];
        low=a[0];
    }
    int count;
    count=0;

    for(int i=0; i<n;i++)
    {
        for(int j=1;j<=i;j++){
              //cout<<"hiii    "<<low<<"      "<<high <<"   a[j]: "<<a[j]<<endl;
        if(low>a[j]){
            low=a[j];
           count++;
        }
        if(high<a[j]){
            high=a[j];
            count++;
        }
       // if(a[j]>high || a[j]<low)count++;
        }
    }
    cout<<count<<endl;
}
