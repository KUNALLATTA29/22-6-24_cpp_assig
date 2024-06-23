#include<bits/stdc++.h>
using namespace std;

int maximum(int a, int b, int c, int d, int e, int f){
    int max=a;
    if(a>max){
        max=a;
    }
    if(b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }
    if(d>max){
        max=d;
    }
    if(e>max){
        max=e;
    }
    if(f>max){
        max=f;
    }
    
    return max;
}

int subtract(int max, int x, int y){
    return (max-x-y);
}

long long sol(int result){
    int tem = abs(result);
    
    long long fact=1;
    
    for(long long i=1;i<=tem;i++){
        fact*=i;
    }
    return fact;
}

int main(){
    
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    
    int max=maximum(a,b,c,d,e,f);

    
    if(max>75){
        int x,y;
        cin>>x>>y;
        int result = subtract(max,x,y);
        if(result<0){
            int ans = sol(result);
            cout<<ans<<endl;
        }else{
            cout<<"subtract is not less than 0";
        }
    }else{
        cout<<"max is less than 75";
    }
    
    
    
    
    return 0;
}