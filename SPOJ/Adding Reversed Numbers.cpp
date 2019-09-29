#include <iostream>
using namespace std;

int reverse(int a){
    	int a1=0,rem,m=1;
		rem=a%10;
		if(rem==0){
			do{
				a/=10;
					rem=a%10;
			}while(!rem);
		}

		while(a){
		a1=(a1*m)+rem;
		    a/=10;
		    rem=a%10;
		    m=10;

		}
		return a1;
}

int main() {
	std::ios_base::sync_with_stdio(false);
	// your code here
	int n;
	 cin>>n;
	while(n){
		int a,b;
		cin>>a>>b;

		cout<< reverse(reverse(a)+reverse(b))<<"\n";

		n--;
	}

	return 0;
}
