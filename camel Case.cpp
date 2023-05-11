
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int i,n=s.size();
    for(i=0;i<n;i++){
        if(s[i]>='A' && s[i]<='Z'){
            cout<<i+1;
            break;
        }
    }
return 0;}
