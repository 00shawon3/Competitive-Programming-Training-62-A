#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    int i = 0;
    int j = s.length()-1;
    bool palindrom = true;

    while(i < j)
    {
        if(s[i] != s[j]){
           palindrom = false;
           break;
        }
        i++;
        j--;
    }
    if(palindrom){
        cout<<"The string is a palindrom"<<endl;
    }
    else{
        cout<<"The string is not a palindrom"<<endl;
    }
}