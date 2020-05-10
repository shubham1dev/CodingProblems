#include<bits/stdc++.h>

using namespace std;

int main(){
    
    //Program to find prime numbers till numbers
    int n;
    cin>>n;
    
    vector<bool>num(n+1, false);
    
    num[0] = true;
    num[1] = true;
    
    for(int i=2;i<=n;i++){
        
        int k = i;
        int m = 2;
        int val = k*m;
        if(!num[k]){
          
          while(val<=n){
              
              num[val] = true;
              m++;
              val = k*m;
              
          }
            
        }
        
    }
    
    for(int i=0;i<=n;i++){
        
        if(!num[i])
        cout<<i<<" ";
        
    }
    
    cout<<endl;
    return 0;
}