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
    // for(int i=0; i<test;i++){
    //     cin>>n;
    //     for(int i=0;i<n;i++){
    //     if(i%2==0 || i==0){
    //         cout<<i+1<<" ";
    //     }
    //     else{
    //         cout<<2*i<<" ";
    //     }
    // }
    // cout<<endl;
    // }
    while(test--){
        int n; cin>>n;
        for(int i=0; i<n; i++){
            cout<<((i&1)?2*i:i+1)<<" ";
        }

        cout<<endl;
    }
    
    // int x,a,b,c;
    // int low,med,sum=0;
	// for(int i=0;i<test;i++){
	//     cin>>x>>a>>b>>c;
	//     if(a<b && a<c){
	//          low=a;
	//     }
	//     else if(b<c && b<a){
	//          low=b;
	//     }
	//     else{
	//          low=c;
	//     }
    //     if(a>b && b>c){
	//          med=b;
	//     }
	//     else if(b<c && c<a){
	//          med=c;
	//     }
	//     else{
	//          med=a;
	//     }
    //     sum=med+(x-1)*low;
    //     cout<<sum<<endl;
	// }

    return 0;
}