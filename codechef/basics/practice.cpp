#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output1.txt","w",stdout);
    #endif
    
    int test;
    cin>>test;

    // int n,x;
    // while(test--){    
    //     int sum=0;
    //     cin>>n>>x;
    //     int a[n];
    //     for(int i=0;i<n;i++){
    //         cin>>a[i];
    //         if(x>a[i]){
    //             sum+=1;
    //         }
    //     }
    //     cout<<sum<<endl;
    // }
    
    // int x,y,res;
    // while(test--){
    //     cin>>x>>y;
    //     res=x/(2*y);
    //     cout<<res<<endl;
    // }

    // string s,t;
    // while(test--){
    //     cin>>s>>t;
    //     for(int i=0;i<5;i++){
    //         if(s[i]==t[i]){
    //             cout<<"G";
    //         }
    //         else{
    //             cout<<"B";
    //         }
    //     }
    //         cout<<endl;
    // }

    // int n,days;
    // while(test--){
    //     cin>>n;
    //     days=n/7;
    //     if(n%7==6){
    //         days+=1;
    //     }
    //     cout<<days<<endl;
    // }

    // int a,b,c;
    // while(test--){
    //     cin>>a>>b>>c;
    //     if(a>=b){
    //         if(a>=c){
    //             cout<<a<<endl;
    //         }
    //         else{
    //             cout<<c<<endl;
    //         }
    //     }
    //     else{
    //         if(b>=c){
    //             cout<<b<<endl;
    //         }
    //         else{
    //             cout<<c<<endl;
    //         }
    //     }
    // }

    int n,sum;
    while(test--){
        cin>>n;
        sum=n%2+n/2;
        cout<<sum<<endl;
    }
        
    
    return 0;
}