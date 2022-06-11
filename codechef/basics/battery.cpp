#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output1.txt","w",stdout);
    #endif
    
    int test;
    cin>>test;

    int n;
    int x;
    while(test--){
            int sum=0;
            cin>>n;
        for(int j=0;j<n;j++){
            cin>>x;
            if(x>=10 && x<=60){
                sum++;
            }
        }
        cout<<sum<<endl;
    }

        
    
    return 0;
}