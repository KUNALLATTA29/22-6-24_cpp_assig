#include<bits/stdc++.h>
using namespace std;

long long product(int a, int b, int c, int d){
    
    long long k=a*b*c*d;
    
    return k;
}

long long divide(long long pro, long long x){
    return ceil(pro/x);
}

int main(){
    
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    long long pro = product(a,b,c,d);
    
    if(pro>1000){
        long long x;
        cin>>x;
        cout<<divide(pro,x);
    }else{
        cout<<"pro is less than 1000";
    }
    
    
    return 0;
}