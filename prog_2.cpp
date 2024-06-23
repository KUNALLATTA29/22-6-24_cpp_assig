#include<bits/stdc++.h>
using namespace std;

int addition(int pro, int x){
    return pro+x;
}

bool odd(int add){
    if(add%2!=0){
        return true;
    }else{
        return false;
    }
}

int sq(int add){
    return add*add;
}


int main(){
    
    int a,b;
    cin>>a>>b;
    
    int pro=a*b;
    
    if(pro>50){
        int x;
        cin>>x;
        int add=addition(pro,x);
        if(odd(add)){
            cout<<sq(add);
        }else{
            cout<<"it's not odd.";
        }
        
    }else{
        cout<<"sum is less than 100";
    }
    
    return 0;
}