#include<bits/stdc++.h>
using namespace std;

int difference(int a, int b){
    int k =a-b;
    if(k<0){
        return abs(k);
    }
    return k;
}

bool iseven(int diff){
    if(diff%2==0){
        return true;
    }
    
    return false;
}

long cube(int diff){
    return pow(diff,3);
}

int main(){
    
    int a,b;
    cin>>a>>b;
    
    int diff=difference(a,b);
    
    if(iseven(diff)){
        cout<<cube(diff);
    }else{
        cout<<"diff is not even";
    }
    
    
    
    return 0;
}