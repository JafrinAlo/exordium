#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+(sizeof(a)/sizeof(a[0])));

    // for(int i=0;i<n;i++)
        //cout<<a[i];
    int sum=0;
    int testSum, count=0;

    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }

    for(int i=n-1;i>=0;i--)
    {
        count++;
        testSum+=a[i];

        if(testSum>(sum/2))
        {
            break;
        }

    }
    cout<<count;

}
