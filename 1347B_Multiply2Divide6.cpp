#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count=0;
        int ans;
        long n=0;
        cin>>n;


        do
        {
            ans=n%6;
            if(ans==0)
            {
                n=n/6;
                count++;
            }
           if(ans!=0 && n!=1)
           {
                n=n*2;
            //cout<<"n in do loop: "<<n<<endl;
            count++;
           }
        }
        while(n>1);

        if(n<0)
        {
            cout<<"-1"<<endl;
        }
        else
            cout<<count<<endl;

    }
}
