
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main(){
    string s,k;
    cin>>s;
    int i,n=s.size();
    for (i=0;i<n;i++){
        if(s[i]=='0'){
            k+='1';
        }
        else{k+='0';}
    }
    cout<<k;
return 0;}
