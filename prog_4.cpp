#include<bits/stdc++.h>
using namespace std;

int addition(int a, int b, int c){
    return (a+b+c);
}

bool isperfectsq(int sum){
    if(sum<0){
        return false;
    }
    int k = static_cast<int>(sqrt(sum));
    return (k*k==sum);
}

int root(int sum){
    return sqrt(sum);
}

int main(){
    
    int a,b,c;
    cin>>a>>b>>c;
    cout<<endl;
    
    int sum=addition(a,b,c);
    
    if(sum==0){
        if(isperfectsq(sum)){
            cout<<root(sum);
        }else{
            cout<<"not a perfect square";
        }
    }else{
        cout<<"sum is not equal to 0";
    }
    
    
    
    
    return 0;
}