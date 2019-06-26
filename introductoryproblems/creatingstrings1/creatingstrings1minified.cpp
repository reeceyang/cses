#include<bits/stdc++.h>
using namespace std;int main(){string s;cin>>s;int n=s.size();char c[n];strcpy(c,s.c_str());sort(c,c+n);string b="";int e=0;do{e++;for(int i=0;i<n;i++){b+=c[i];}
b+="\n";}while(next_permutation(c,c+n));cout<<e<<"\n"<<b;}
