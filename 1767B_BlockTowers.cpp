#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long a[n-1];
        long count=0;
        cin>>count;
        for(int i=0;i<n-1;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n-1);//for max number of blocks to be moved
        for(int i=0;i<n-1;i++)
        {
                if(count<a[i])
                {
                    if((a[i]-count)%2){
                        long ceilVal=(a[i]-count)/2+1;
                        count+=ceilVal;
                    }
                    else
                        count+=(a[i]-count)/2;

                }

        }

        cout<<count<<endl;
    }
    return 0;
}
