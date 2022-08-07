//Travelling salesman prb, DIV 2 prb of codeforces
#include <bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int minx=0, maxx=0, miny=0, maxy=0;


        for(int i=0;i<n;i++){
                 int x;
        int y;
            cin>>x;
            cin>>y;
             minx=min(minx,x);
            maxx=max(maxx,x);
            miny=min(miny,y);
            maxy=max(maxy,y);
        }

        //cout<<minx<<" "<<maxx<<" "<<miny<<" "<<maxy<<endl;
       cout << 2 * (maxx - minx) + 2 * (maxy - miny) << endl;


    }
    return 0;
}
