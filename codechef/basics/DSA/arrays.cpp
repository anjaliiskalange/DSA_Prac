#include <iostream>
using namespace std;

// struct Pair
// {
//     /* data */
//     int min;
//     int max;
// };

// struct Pair getMinMax(int arr[], int n)
// {
//     /* data */
//     struct Pair minmax;
//     int i;

//     if (n%2==0)
//     {
//         if(arr[0]>arr[1]){
//             minmax.max=arr[0];
//             minmax.min= arr[1];
//         }
//         else{
//             minmax.max=arr[1];
//             minmax.min=arr[0];
//         }
//         i=2;
//     }
//     else
//     {
//         minmax.min=arr[0];
//         minmax.max=arr[0];
//     }
//     i=1;
    
//     while(i<n-1){
//         if(arr[i]>arr[i+1]){
//             if(arr[i]>minmax.max){
//                 minmax.max=arr[i];
//             }
//             if(arr[i+1]<minmax.min){
//                 minmax.min=arr[i+1];
//             }
//         }

//         else
//         {
//             if(arr[i+1]>minmax.max){
//                 minmax.max=arr[i+1];
//             }
//             if(arr[i]<minmax.min){
//                 minmax.min=arr[i];
//             }
//         }
//         i+=2;
//     }
//     return minmax;
// };

// void reverseArray( int a[], int start, int end){
//     while(start<end){
//         int temp= a[start];
//         a[start] = a[end];
//         a[end]= temp;
//         start ++;
//         end--;
//     }
// }

// void printArray(int a[], int size){
//     for(int i=0;i<size;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }


// void maxSumSubarray( int b[] ,int n){
//     int currsum=0;
//     int maxsum=0;

//     for(int i=0;i<n;i++){
//         currsum= currsum+b[i];
//         if(currsum>maxsum){
//             maxsum=currsum;
//         }
//         if(currsum<0){
//             currsum=0;
//         }
//     }
//         cout<<maxsum<<endl;
// }

void containDuplicate(int a[], int n){
    int i=0;
    while(i<n){
        if(a[i]==a[i+1]){
            cout<< "true"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }
        i++;
    }
}




int main(){

    //MAXIMUM OF AN ARRAY
    // int arr[] ={23, 45, 3 ,89, 41,10};
    // int arr_size = 6;

    // Pair minmax = getMinMax(arr, arr_size);

    // cout<<"minimum number is "<<minmax.min<<endl;

    // cout<<"maximum number is "<<minmax.max<<endl;

    //REVERSE AN ARRAY
    // int a[]={2,4,8,6};
    // int n =sizeof(a)/sizeof(a[0]);
    
    // printArray( a, n);

    // reverseArray(a, 0 , n-1);

    // cout<<"reversed array is "<<endl;

    // printArray( a , n);

    // MAXIMUM SUBARRAY
    // int b[] = {-2,1,-3,4,-1,2,1,-5,4};
    // int n = sizeof(b)/sizeof(b[0]);

    // maxSumSubarray( b, n);

    // CONTAINS DUPLICATE
    int a[]= {1, 3,4,2,1};
    int n = sizeof(a)/sizeof(a[0]);

    containDuplicate(a,n);

     return 0;
}