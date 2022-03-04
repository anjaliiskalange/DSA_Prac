#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int test;
    cin>>test;

    int a,b;
    for(int i=1;i<=test;i++){
        cin>>a>>b;
        cout<<a+b<<endl;
    }

    // int a=5;
    // int b=6;

    // cout<<a+b<<endl;


    return 0;
}