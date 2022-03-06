#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output1.txt","w",stdout);
    #endif
    
    int test;
    cin>>test;

    int x;
    for(int i=0;i<test;i++){
        cin>>x;
        if(x<=15){
        cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

        
    
    return 0;
}