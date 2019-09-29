#include <iostream>
using namespace std;

int main() {
	//code
    int num;
	scanf("%d",&num);
	while(num){
	    int x,y;
	    scanf("%d %d",&x,&y);
	    int result;
	    if(x%2==0){
	        if((x==y)||(y==x-2))
	        printf("%d\n",x+y);
	        else 
	        printf("No Number\n");
	    }
	    else {
	        if ((x==y)||(y==x-2))
	        printf("%d\n",x+y-1);
	        else 
	        printf("No Number\n");
	    }
	     num--;
	}
	return 0;
}
