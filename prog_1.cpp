#include<bits/stdc++.h>
using namespace std;
int average(int x, int y, int z){
    return (x+y+z)/3;
}

long long factorial(int ave){
    long long fact=1;
    for(int i=1; i<=ave;i++){
        fact*=i;
    }
    return fact;
}

bool isprime(long long fact){
    if(fact<=1){
        return false;
    }
    
    for(long long i=2; i<=sqrt(fact); i++){
        if(fact%i==0){
            return false;
        }
    }
    
    return true;
}
int main(){
    
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    int sum=a+b+c+d;
    
    if(sum>100){
        int x,y,z;
        cin>>x>>y>>z;
        int ave=average(x,y,z);
        
        if(ave>50){
            long long ans = factorial(ave);
            if(isprime(ans)){
                cout<<"it is prime";
            }else{
                cout<<"it's not prime";
            }
        }else{
            cout<<"average is less than 50";
        }
    }else{
        cout<<"sum is less than 100";
    }
    
    return 0;
}