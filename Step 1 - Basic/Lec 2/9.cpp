#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        //star
        for(int j=1;j<=i;j++){
            cout<<"*";
        }cout<<endl;
    }
    for(int i=0;i<n;i++){
        //space 
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        //star
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        //star
        for(int j=1;j<n-i;j++){
            cout<<"*";
        }cout<<endl;
    }
    return 0;
}