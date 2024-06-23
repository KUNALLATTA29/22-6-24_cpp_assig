#include<bits/stdc++.h>
using namespace std;

int maximum(int a, int b, int c, int d, int e){
    long k=a;
    if(k<b){
        k=b;
    }
    if(k<c){
        k=c;
    }
    if(k<d){
        k=d;
    }
    if(k<e){
        k=e;
    }
    
    return k;
}

int subtract(int max, int x){
    
    return (max-x);
}

long cube(int result){
    
    return (result*result*result);
}

int main(){
    
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    
    int max = maximum(a,b,c,d,e);
    
    if(max>90){
        int x;
        cin>>x;
        int result = subtract(max,x);
        if(result>0){
            cout<<cube(result);
        }else{
            cout<<"result is less than 0";
        }
    }else{
        cout<<"max is less than 90";
    }
    return 0;
}