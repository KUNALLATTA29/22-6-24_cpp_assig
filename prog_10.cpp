#include<bits/stdc++.h>
using namespace std;

long average(int a, int b, int c){
    
    long k=(a+b+c)/3;
    
    return k;
}

bool isprime(long ave){
    if(ave<=1){
        return false;
    }
    
    for(long i=2;i<=sqrt(ave);i++){
        if(ave%i==0){
            return false;
        }
    }
    
    return true;
}

long long factorial(long ave){
    long long fact=1;
    for(long long i=1; i<=ave; i++){
        fact*=i;
    }
    return fact;
}

int main(){
    
    int a,b,c;
    cin>>a>>b>>c;
    
    long ave = average(a,b,c);
    
    if(ave<25){
        if(isprime(ave)){
            cout<<factorial(ave);
        }else{
            cout<<"it's not prime";
        }
    }else{
        cout<<"ave is not less than 25";
    }
    
    
    return 0;
}