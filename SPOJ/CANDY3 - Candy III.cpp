
http://www.spoj.com/problems/CANDY3/
using namespace std;
#include <boost/multiprecision/cpp_int.hpp>    //using biginteger library for high no like 1000! 10k!

namespace mp = boost::multiprecision;
int main() {  
	 mp::cpp_int test;
	cin>>test;
	while(test){
	    mp::cpp_int a=0,i=0,sum=0,num;
	    cin.ignore();
	    
	    cin>>num;
	    while(num){
	       cin>>a;
	        sum+=a;
	        i++;
	        
	        num--;
	       
	    }
	   
	    if(sum%i==0)
	    cout<<"YES"<<"\n";
	    else
	    cout<<"NO"<<"\n";
	    test--;
	}
	return 0;
}
