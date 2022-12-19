#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[4];
        int count=0;
        for(int i=0;i<4;i++)
        {
            cin>>arr[i];
        }

        for(int i=0;i<4;i++)
        {
        if((arr[0]<arr[1] && arr[2]<arr[3])|| (arr[0]>arr[1] && arr[2]>arr[3]))
        {
             if((arr[0]<arr[2] && arr[1]<arr[3])|| (arr[0]>arr[2] && arr[1]>arr[3]))
                count++;
        }

       // if((arr[0]<arr[2] && arr[1]<arr[3])|| (arr[0]>arr[2] && arr[1]>arr[3]))
        //count++;
        }
        if(count>0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}

