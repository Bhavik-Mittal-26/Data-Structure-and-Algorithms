#include<bits/stdc++.h>
using namespace std;
int main(){
        int sum =0;
        int n ;
        cin>>n;
        int arr[n] ; 
        int mean;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
    for(int i =0;i<n;i++){
        sum+=arr[i];
    }
    mean = sum/(n);
    cout<<mean;
    
    return 0;
};