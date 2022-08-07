#include <iostream>
using namespace std;

int selectionSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[minIndex])
                minIndex=j;
        }
        swap(a[minIndex],a[i]);
    }
}

// int selectionS(int a[], int n){
//     for(int i=0;i<n-1;i++){
//         int minindex=i;
//         for(int j=i+1;j<=n;j++){
//             if(a[j]<a[minindex]){
//                 minindex=j;
//             }
//         }
//         swap(a[i],a[minindex]);
//     }
// }

int bubbleSort(int a[], int n){
    for(int i=1;i<n;i++){
        bool swapped = false;   
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swapped= true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}

// int bubbleS(int a[], int n){
//     for(int i=0;i<n;i++){
//         bool swapped= false;
//         for(int j=0;j<=n-i;j++){
//             if(a[j]>a[j+1]){
//                 swap(a[j],a[j+1]);
//                 swapped=true;
//             }
//         }
//         if(swapped==false){
//             break;
//         }
//     }
// }

int insertionSort(int a[], int n){
    for(int i=1;i<n;i++){
        int temp=a[i];
        int j=i-1;
        for(;j>=0;j--){
            if(a[j]>temp){
                a[j+1]=a[j];
            }
            else{
                break;
            }
        }
        a[j+1]=temp;
    }
}

int main(){
    int a[]={12,45,2,89};
    int n = sizeof(a)/sizeof(a[0]);
    //selectionS(a,n);
    //bubbleSort(a,n);
    insertionSort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}