#include <iostream>
using namespace std;

int main() {
	
	// your code here
	int n,a;
	 scanf("%d",&n);
	while(n){
		scanf("%d",&a);
		int b=5,num=0;                           
		while(b<=a){                   // calculating trailing zeroes
			num+=(a/b);
			b*=5;
		}
		printf("%d\n",num);
		n--;
	}

	return 0;
}
