#include<bits/stdc++.h>
using namespace std;

int maximum(int a, int b, int c, int d){
    int k =a;
    if(k<b){
        k=b;
    }
    if(k<c){
        k=c;
    }
    if(k<d){
        k=d;
    }
    
    return k;
}

bool isprime(int max){
    if(max<=1){
        return false;
    }
    
    for(int i=2;i<=sqrt(max);i++){
        if(max%i==0){
            return false;
        }
    }
    
    return true;
}

int dou(int max){
    return (max*2);
}

int main(){
    
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    int max = maximum(a,b,c,d);
    
    if(max>20){
        if(isprime(max)){
            cout<<dou(max);
        }else{
            cout<<"it's not prime";
        }
    }else{
        cout<<"max is less than 20";
    }
    
    return 0;
}