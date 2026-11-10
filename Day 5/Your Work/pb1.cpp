#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int target;
    cin>> target;

    vector<int>a(n);
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(), a.end());

    int i = 0;
    int j = n-1;
    bool found = false;

    while(i < j)
    {
        int sum = a[i] + a[j];

        if(sum == target){
            cout<<"found target"<<" " <<a[i]<<"and" <<a[j]<<endl;
            found = true;
            break;
        }
        
        else if(sum < target){
            i++;
        }
        else{
            j--;
        }
    }
    if(!found)
    {
        cout<<"sum didn't equal to target"<<target<<endl;
    }
}