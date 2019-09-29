//http://www.spoj.com/problems/LASTDIG/
#include <iostream>
#include<math.h>
using namespace std;
int main() {
int num;
cin>>num;
while(num){
    int a,b,c;
    cin>>a>>b;
    c=b%4;
    if(b==0)
    cout<<1<<"\n";
    else if(c==0)
    cout<<int(pow(a,4))%10<<"\n";
    else
    cout<<int(pow(a,c))%10<<"\n";
   num--;
}
	return 0;
}
