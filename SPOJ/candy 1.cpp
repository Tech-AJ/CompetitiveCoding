#include <iostream>
using namespace std;

int main() {
	
	// your code here
int num;
cin>>num;
while(num!=-1){
    int a[num],sum=0;
    for(int i=0;i<num;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if((sum%num)!=0)
    cout<<-1<<"\n";
   
    else{
    int val=sum/num;
    sum=0;
    
     for(int i=0;i<num;i++){
        if((val-a[i])>0)
        
        sum+=(val-a[i]);
    }
    cout<<sum<<"\n";
    }
cin>>num;
}

	return 0;
}
