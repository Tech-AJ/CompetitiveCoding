//http://www.spoj.com/problems/JULKA/
#include <boost/multiprecision/cpp_int.hpp>    //using biginteger library for high no like 1000! 10k!
#include <iostream>
namespace mp = boost::multiprecision;
using namespace std;
int main() {
	int num =10;
	while(num!=0){
	    mp::cpp_int total_n,more,x,y;                             // can store no like 10^100
	    cin>>total_n>>more;
	    x=(total_n+more)/2;
	   
	    cout<<x<<"\n";
	    cout<<total_n-x<<"\n";
	    
	    num--;
	}
	// your code here

	return 0;
}
