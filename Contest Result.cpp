/*************************[Bismillahir Rahmanir Rahim]**************************/
#include<bits/stdc++.h>
#include<stdio.h>
#include<ctype.h>
#define Mahid using namespace std;
#define ll long long
#define dl double
#define str string
#define YES printf("YES\n");
#define Yes printf("Yes\n");
#define yes printf("yes\n");
#define NO printf("NO\n");
#define No printf("No\n");
#define no printf("no\n");
#define loop int t;cin>>t;while(t--)
#define puts printf
#define gcd __gcd
#define elif else if
#define stop break;
#define go continue;
#define end exit(0);
#define bye return 0;
#define start int main()
#define vi vector<int>
#define si set<int>
#define Vikings_PUTIN ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
Mahid
start{
Vikings_PUTIN
   int m,n,i;cin>>n>>m;
   int arr1[n],arr2[m];
   for(i=0;i<n;i++){
    cin>>arr1[i];
   }
   for(i=0;i<m;i++){
    cin>>arr2[i];
   }
   int sum=0;
   for(i=0;i<m;i++){
    sum+=arr1[arr2[i]-1];
   }
   cout<<sum;
    bye
}
