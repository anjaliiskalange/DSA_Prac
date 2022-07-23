#include <iostream>
using namespace std;

int main(){

    int n =1330;

    int notes=0;

    switch (notes)
    {
    case 100:
        notes = n/100;
        cout<<"100 notes"<<notes;
    case 50:
        notes = n/50;
        cout<<"50 notes"<<notes;
    case 20:
        notes = n/20;
        cout<<"20 notes"<<notes;
    case 1:
        notes = n/1;
        cout<<"1 notes"<<notes;
    
    default:
        break;
    }


    return 0;
}