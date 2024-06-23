#include<bits/stdc++.h>
using namespace std;

int minimum(int a, int b, int c, int d){
    int k=a;
    if(k>b){
        k=b;
    }
    if(k>c){
        k=c;
    }
    if(k>d){
        k=d;
    }
    
    return k;
}

int multi(int min){
    return (min*5);
}

long long factorial(int ans){
    long long fact =1;
    
    for(long long i=1;i<=ans;i++){
        fact*=i;
    }
    
    return fact;
}

int main(){
    
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    int min = minimum(a,b,c,d);
    
    if(min<10){
        int ans = multi(min);
        if(ans>50){
            cout<<factorial(ans);
        }else{
            cout<<"ans is less than 50";
        }
    }else{
        cout<<"min is not less than 10";
    }
    
    return 0;
}