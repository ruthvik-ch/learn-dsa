#include<bits/stdc++.h>
using namespace std;

int main(){ 
    int n;
    cin>> n;
    for(int i=0; i<n;i++){
        // st 
        for(int j=0; j<=n-i-1;j++){
            cout<<"*";
        }
        for(int j=0; j<(2*i);j++){
            cout<<" ";
        }
        for(int j=0; j<=n-i-1;j++){
            cout<<"*";
        }
        cout<< endl;
    }


    for(int i=n; i>=0;i--){
        // st 
        for(int j=0; j<=n-i-1;j++){
            cout<<"*";
        }
        for(int j=0; j<(2*i);j++){
            cout<<" ";
        }
        for(int j=0; j<=n-i-1;j++){
            cout<<"*";
        }
        cout<< endl;
    }


    return 0;
}