#include<bits/stdc++.h>
using namespace std;

int maximum(int x, int y, int z, int s){
    int k=x;
    if(k<y){
        k=y;
    }
    if(k<z){
        k=z;
    }
    if(k<s){
        k=s;
    }
    return k;
}

long cube(int max){
    return (max*max*max);
}

int main(){
    
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    
    int ave = (a+b+c+d+e+f)/6;
    
    if(ave>70){
        int x,y,z,s;
        cin>>x>>y>>z>>s;
        int max = maximum(x,y,z,s);
        if(max>50){
            cout<<cube(max);
        }else{
            cout<<"max is less than 50";
        }
    }else{
        cout<<"ave is less than 70";
    }
    
    return 0;
}