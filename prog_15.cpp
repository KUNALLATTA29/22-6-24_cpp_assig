#include<bits/stdc++.h>
using namespace std;

int addition(int x, int y, int z){
    return (x+y+z);
}

bool iseven(int sum2){
    if(sum2%2==0){
        return true;
    }
    return false;
}

long long factorial(int sum2){
    long long fact=1;
    
    for(long long i=1;i<=sum2;i++){
        fact*=i;
    }
    
    return fact;
}

int main(){
    
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    int sum = a+b+c+d;
    if(sum>150){
        int x,y,z;
        cin>>x>>y>>z;
        int sum2 = addition(x,y,z);
        if(iseven(sum2)){
            cout<<factorial(sum2);
        }else{
            cout<<"sum2 is odd";
        }
    }else{
        cout<<"sum is less than 150";
    }
    
    return 0;
}