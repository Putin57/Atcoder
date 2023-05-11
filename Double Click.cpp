#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main(){
    int n,i;long long m;cin>>n>>m;
    int arr[n];
    for (i=0;i<n;i++){
        cin>>arr[i];
    }
    for (i=1;i<n;i++){
        if ((arr[i]-arr[i-1])<=m){
                cout<<arr[i];
            exit(0);
        }}
       cout<<-1;
return 0;}
