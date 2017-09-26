//http://www.spoj.com/problems/AE00/
#include <iostream>
#include<math.h>
using namespace std;

int main() {
	
	// your code here
	int num,rec=0;
cin>>num;
for(int i=1;i<=sqrt(num);i++)
  for(int j=i;j*i<=num;j++)
     rec++;
cout<<rec;

	return 0;
}

     
