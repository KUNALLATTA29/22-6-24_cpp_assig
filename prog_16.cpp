#include<bits/stdc++.h>
using namespace std;

int addition(int pro){
    return (pro+5);
}

int main(){
    
    int a,b;
    cin>>a>>b;
    int pro = a*b;
    
    if(pro<20){
        cout<<addition(pro);
    }else{
        cout<<"pro is not less than 20";
    }
    
    return 0;
}