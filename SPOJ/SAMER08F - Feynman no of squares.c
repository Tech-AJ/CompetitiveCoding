#include <stdio.h>

int main() {
	//code
	int num;
	scanf("%d",&num);
	do{


	    int res=(num*(num+1)*(2*num+1))/6;
	    printf("%d\n",res);


	    scanf("%d",&num);
	}while(num>0);
	  printf("\n");
	return 0;
}
