#include <iostream>
#include <cstdlib>
using namespace std;

void update(int *a,int *b) {
    // Complete this function
    int aa=*a;
    *a=*a+*b;
    *b=aa-*b;
    *b=abs(*b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    cin>>a>>b;
    update(pa, pb);
    cout<<a<<endl;
    cout<<b;

    return 0;
}
