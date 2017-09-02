#include <iostream>
#include<cmath>
using namespace std;
bool fact(int n){
     if(n==1)
     return false;
 for (int i=2;i<=sqrt(n);i++){
    
     if(n%i==0)
      return false;
     
 }
    return true;
}

int main(){
   	std::ios_base::sync_with_stdio(false); 
    int num;
    cin>>num;
    while(num){
        int n,m;
        cin>>n>>m;
        for(int i=n;i<=m;i++){
            if(fact(i))
            cout<<i<<"\n";
        }
        cout<<"\n";
        num--;
    }
  return 0;  
}
