#include<bits/stdc++.h>
using namespace std;

int average(int a, int b, int c){
    return (a+b+c)/3;
}

int product(int x, int y){
    
    int k = x*y;
    
    if(k<0){
        return abs(k);
    }
    return k;
}

int main(){
    
    int a,b,c;
    cin>>a>>b>>c;
    
    int ave = average(a,b,c);
    
    if(ave>40){
        int x,y;
        cin>>x>>y;
        cout<<product(x,y);
        
    }else{
        cout<<"ave is less than 40";
    }
    
    return 0;
}