#include<iostream>
#include<string.h>
#include<algorithm>
#include<sstream>
using namespace std;
int cmp(string a,string b){
    int suma=0,sumb=0;
    if(a[0] != b[0])return a>b;
    suma = (a[1]-'0');
    sumb = (b[1]-'0');
    if(a[2]!='\0')suma = suma*10+a[2]-'0';
    if(b[2]!='\0')sumb = sumb*10+b[2]-'0';
    return suma>sumb;
}
int main(){
    int n,k=0;
    while(cin>>n){
    k=0;
    cin.ignore();
    string ans[1000],str;
    while(n){
    getline(cin,str);
    stringstream ss(str);
    string s[1000];
    int i=0;
    while(ss>>s[i])i++;
    sort(s,s+i,cmp);
    for(int j=0;j<i;j++){
        ans[k] += s[j];
        if(j!=i-1)ans[k] += " ";
    }
    n--;
    k++;
    ss.str("");
    ss.clear();
    }
    for(int j=0;j<k;j++){
            cout<<ans[j]<<endl;
    }
    }
return 0;
}
