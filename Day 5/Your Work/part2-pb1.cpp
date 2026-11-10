#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n >>k;
    
    vector<int>a(n);
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    if(k > n){
        cout<<"invalid size declaration"<<endl;
    }
    int sum = 0,max_sum = 0;

    for(int i = 0; i < k; i++){
        sum += a[i];
    }
    max_sum = sum;

    for(int i = k; i < n; i++)
    {
        sum += a[i] - a[i - k];
        max_sum = max(max_sum, sum);
    }
    cout<<"Maximum sum of subarray of size "<< k << " is: "<< max_sum<<endl;
}