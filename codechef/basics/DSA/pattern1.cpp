#include <iostream>
using namespace std;

int main(){

    // int n =7;
    // cin>>n;

    // int i =1;
    // while (i<=n)
    // {
    //     int j = 1;
    //     while (j<=n)
    //     {
    //         cout<<i;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;  
    // }

    int n =5;

    int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<j;
    //         j++;
    //     }

    //     i++;
    //     cout<<endl;
    // }
    // while(i<=n){
    //     int j =n;
    //     while(j>=1){
    //         cout<<j;
    //         j--;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // int count =1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<count <<" ";
    //         count++;
    //         j++;
    //     }
    //     i=i+1;
    //     cout<<endl;
    // }

    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<i<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // int count = 1;
    // while (i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<count<<" ";
    //         count++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // while(i<=n){
    //     int j=i;
    //     while(j<=2*i-1){
    //         cout<<j;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<i-j+1;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<i+j-1;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i+j-1;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}