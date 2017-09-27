http://www.spoj.com/problems/EIGHTS/

using namespace std;
#include <boost/multiprecision/cpp_int.hpp>    //using biginteger library for high no like 1000! 10k!
#include <iostream>
namespace mp = boost::multiprecision;
int main() {  
	 mp::cpp_int test;
	cin>>test;
	while(test){
	    mp::cpp_int k,count=0,num=190,cube;
	    cin>>k;
	    while(1){
	        
	       cube= pow(num,3);
	        if(cube%10==8)
	          {cube/=10;
	              if(cube%10==8)
	            {cube/=10;
	                if (cube%10==8)
	               {
	                   count++;
	                   cout<<num<<"\n";
	                    
	               }}}
	               num++;
	         if(count==k)
	       break;
	       
	     
	    }
	    test--;
	}
	return 0;
}
