#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int a[n];

        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }

         for(int j=0;j<n;j++)
        {
            int b=0;
            cin>>b;
            char ch[b];
            for(int k=0;k<b;k++)
            {
                cin>>ch[k];

                if(ch[k]=='D')
                {
                    //cout<<"before change:"<<a[j]<<"\n";
                    a[j]=a[j]+1;
                    if(a[j]>9)
                    {
                        a[j]=0;
                    }
                   // cout<<"after change:"<<a[j]<<"\n";
                }
                if(ch[k]=='U'){
                    a[j]=a[j]-1;
                    if(a[j]<0) a[j]=9;
                }
            }

        }
        for(int j=0;j<n;j++)
        {
            cout<<a[j]<<" ";

        }
        cout<<"\n";


    }
}
