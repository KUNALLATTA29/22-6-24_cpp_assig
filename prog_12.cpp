#include<bits/stdc++.h>
using namespace std;

int addition(int a, int b, int c, int d){
    return (a+b+c+d);
}

int reverse(int sum){
    int rev =0;
    while(sum!=0){
        int d=sum%10;
        rev=rev*10+d;
        sum/=10;
    }
    
    return rev;
}

bool iseven(int result){
    if(result%2==0){
        return true;
    }
    
    return false;
}

int half(int result){
    return (result/2);
}

int main(){
    
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    int sum = addition(a,b,c,d);
    
    if(sum<50){
        int result = reverse(sum);
        if(iseven(result)){
            cout<<half(result);
        }else{
            cout<<"result is not even";
        }
    }else{
        cout<<"sum is not less than 50";
    }
    
    return 0;
}