#include<bits/stdc++.h>
using namespace std;

int division(int x, int y){
    int result = (x/y);
    int rev=0;
    while(result!=0){
        int d=result%10;
        rev=rev*10+d;
        result/=10;
    }
    return rev;
}


int main(){
    
    int a,b,c;
    cin>>a>>b>>c;
    
    int sum=a+b+c;
    
    if(sum>80){
        int x, y;
        cin>>x>>y;
        cout<<division(x,y);
    }else{
        cout<<"sum is less than 80";
    }
    
    
    
    return 0;
}