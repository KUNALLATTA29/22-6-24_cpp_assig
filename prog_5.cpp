#include<bits/stdc++.h>
using namespace std;

int product(int x, int y, int z){
    
    return (x*y*z);
}

int iseven(int pro){
    if(pro%2==0){
        return (pro/2);
    }
    
    return (pro*2);
}

int main(){
    
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    
    int avg = (a+b+c+d+e)/5;
    
    if(avg>60){
        int x,y,z;
        cin>>x>>y>>z;
        int pro = product(x,y,z);
        cout<<iseven(pro);
    }else{
        cout<<"avg is less than 60";
    }
    
    return 0;
}