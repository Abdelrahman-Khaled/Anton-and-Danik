#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{


    int n,a=0,b=0;
    cin>>n;
    char x;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x=='A')a++;
        else b++;

    }
    if(a>b)cout<<"Anton"<<endl;
    if(a<b)cout<<"Danik"<<endl;
    if(a==b)cout<<"Friendship"<<endl;

    return 0;
}
