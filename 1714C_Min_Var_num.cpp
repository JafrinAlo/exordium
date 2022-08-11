#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s;
        cin>>s;

         int result[9];
         int dec=0;

        if(s<10)
        {
            cout<<s<<endl;
        }

        else if(s>9)
        {
            for(int i=9;i>0;i--)
            {
               // if(s>9){
                    s=s-i;
                    //cout<<i<<endl;
                    result[dec]=i;
                    dec++;
                //}
                if(s<i){
               // cout<<s<<endl;
                result[dec]=s;
                dec++;
                break;
               }
            }
        }
        //cout<<sizeof(result)/sizeof(int)<<endl;
       // cout<<dec<<endl;
        for(int i=dec;i>0;i--)
        {
            cout<<result[i-1];
        }
        cout<<endl;
    }
}
/*int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s;
        cin>>s;

        if(s<10)
        {
            cout<<s<<endl;
        }

        else if(s>9)
        {
            for(int i=9;i>0;i--)
            {
                if(s>9){
                    s=s-i;
                    cout<<i<<endl;
                }
               else if(s<9){
                cout<<s<<endl;
                break;
               }
            }
        }
    }
}*/
