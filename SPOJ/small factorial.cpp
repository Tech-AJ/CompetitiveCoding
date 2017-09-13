#include <stdio.h>
#include <boost/multiprecision/cpp_int.hpp>    //using biginteger library for high no like 1000! 10k!
#include <iostream>
namespace mp = boost::multiprecision;
using namespace std;
 mp::cpp_int factorial(int n){
      if (n==1)
      return 1;
      else
      return (n*factorial(n-1));
  }

int main() {
	
	// your code here
	int n,a;
	 scanf("%d",&n);
	while(n){
		scanf("%d",&a);
  mp::cpp_int num =factorial(a);
		
		cout<<num<<"\n";
		n--;
	}
	

	return 0;
}
