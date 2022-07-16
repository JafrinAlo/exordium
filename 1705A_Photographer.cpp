#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        int num=2*n;
        cin>>x;
        int h[num];
        h[num]=0;
        for(int i=0;i<num;i++)
        {
            cin>>h[i];
        }

        int s=sizeof(h)/sizeof(h[0]);
        sort(h,h+s);

       /* for(int i=0;i<num;i++)
        {
            cout<<h[i]<<" ";//sorted output

        }*/
        int count=0;
        int visited=0;//to make sure one element is not visited more than once
        for(int i=0;i<n;i++)//half of the array compared with the other half. Sorted array is used so the with the max value of 2nd half is compared with max element is first half
        {
            for(int j=n;j<num;j++)
            {
                if(h[i]-h[j]<=-x && h[j]!=visited){
                count++;
               // cout<<"i: "<<i<<" h[i]: "<<h[i]<<"         j: "<<j<<" h[j]: "<<h[j]<<endl;
                h[j]=visited;
                break;
                }


            }
        }
        //cout<<count<<endl;
        if(count>=n)cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;


    }
}
