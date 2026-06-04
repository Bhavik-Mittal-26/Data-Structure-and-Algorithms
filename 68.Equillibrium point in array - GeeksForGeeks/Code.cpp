#include <bits/stdc++.h>
using namespace std ;
int main(){
int n ;
int total = 0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];

}
for(int i=0;i<n;i++){
    total+=arr[i];

}

int left_sum=0;

for(int i =0;i<n;i++){
    total-=arr[i];  //right sum
    if(left_sum==total){
        cout<<i;
        return 0;
    }
    left_sum+=arr[i];

}
   cout<<-1;
    return 0;
}