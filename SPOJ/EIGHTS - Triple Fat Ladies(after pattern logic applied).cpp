http://www.spoj.com/problems/EIGHTS/
using namespace std;
#include <boost/multiprecision/cpp_int.hpp>    //using biginteger library for high no like 1000! 10k!
#include <iostream>
namespace mp = boost::multiprecision;
int main() {  
	 mp::cpp_int test;
	cin>>test;
	while(test){
	    mp::cpp_int k,num=192;
	    cin>>k;
	    
	 num+=(250*(k-1));             // after observing pattern, each such no occurs after a gap of 250.                 
	  cout<<num<<"\n";
	    test--;
	}
	return 0;
}
