#include<bits/stdc++.h>
using namespace std;

int multiply(int sum){
    return (sum*10);
}

int main(){
    
    int a,b,c;
    cin>>a>>b>>c;
    
    int sum = a+b+c;
    
    if(sum<30){
        cout<<multiply(sum);
    }else{
        cout<<"sum is not less than 30";
    }
    
    return 0;
}