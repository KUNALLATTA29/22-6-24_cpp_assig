#include<bits/stdc++.h>
using namespace std;

int maximum(int a, int b){
    int k=a;
    if(k<b){
        k=b;
    }
    return k;
}

bool isprime(int max){
    if(max<=1){
        return false;
    }
    for(int i =2;i<=sqrt(max);i++){
        if(max%i==0){
            return false;
        }
    }
    return true;
}

long long factorial(int max){
    long long fact=1;
    for(long long int i=1;i<=max;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    
    int a,b;
    cin>>a>>b;
    
    int max = maximum(a,b);
    
    if(max>30){
        if(isprime(max)){
            cout<<factorial(max);
        }else{
            cout<<"it's not prime";
        }
    }else{
        cout<<"max is less than 30";
    }
    
    return 0;
}