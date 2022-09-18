#include <iostream>
using namespace std;

int getLength(char name[]){
    int count =0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

void reverseStr(char name[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++], name[e--]);
    }
}

bool valid(char ch){
    if((ch>='a' && ch<='z')|| (ch>='A'&& ch<='Z')|| (ch>='0'&&ch<='9')){
        return 1;
    }
    return 0;
}

char lowerCase(char ch){
    if((ch>='a' && ch<='z')|| (ch>='0'&&ch<='9')){
        return ch;
    }
    else{
        char temp= ch -'A'+'a';
        return temp;
    }
}
bool pallindrome(string a){
    int st=0;
    int e=a.length()-1;
    while(st<=e){
        if(a[st]==a[e]){
            st++;
            e--;
        }
        else{
            return 0;
        }
    }
    return 1;
}


int main(){
    // char name[20]="Noon";
    // //name[2]='\0';
    // int n = getLength(name);
    // string s="A man, a plan, A canal: Panama";
    //cout<<getLength(name)<<endl;
    //reverseStr(name,n);
    //cout<<pallindrome(name,n)<<endl;
    //cout<<name<<endl;
    // string temp="";
    // for(int j=0;j<s.length();j++){
    //     if(valid(s[j])){
    //         temp.push_back(s[j]);
    //     }
    // }
    // for(int j=0;j<temp.length();j++){
    //     temp[j]=lowerCase(temp[j]);
    // }
    // cout<<pallindrome(temp);
    //cout<<name<<endl;

    

    return 0;

}