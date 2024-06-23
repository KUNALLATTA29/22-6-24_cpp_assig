#include<bits/stdc++.h>
using namespace std;

long divide(long pro, int x){
    return (pro/x);
}

long long factorial(int di){
    long long fact = 1;
    
    for(int i = 1; i<=di; i++){
        fact*=i;
    }
    
    return fact;
}

int main(){
    
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    
    long pro = a*b*c*d*e;
    
    if(pro>500){
        int x;
        cin>>x;
        long di = divide(pro,x);
        cout<<factorial(di);
    }else {
        cout<<"pro is less than 500";
    }
    
    return 0;
}