#include <stdio.h>
#include<string.h>
int Decrypt(char ch1, char ch2, char ch3, char ch4, char ch5, char ch6) { 
char test[7] = {ch1, ch2, ch3, ch4, ch5, ch6, '\0'}; 
char *dict[4];
dict[0] = "hitler"; dict[1] = "gonazi"; dict[2] = "attack"; dict[3] = "german"; 
return( (strcmp(test, dict[0]) == 0) //matches with "hitler" 
|| (strcmp(test, dict[1]) == 0) //matches with "gonazi" 
|| (strcmp(test, dict[2]) == 0) //matches with "attack" 
|| (strcmp(test, dict[3]) == 0)); //matches with "german" 
}


int check (char *ch,int num){
    
    int i,j;
    for(int i=0;i<26;i++){
        char narr[7];
        for(j=0;j<6;j++){
            
            int x=ch[j]+i;
           //  printf("%d",x);
        
            if(x>'z'){
                x=x-26;
               
            }
             narr[j]=(char)x;
           // printf("%c",narr[j]);
        }
        if(Decrypt(narr[0],narr[1],narr[2],narr[3],narr[4],narr[5])==1)
        return (i);
        printf("\n");
        
    }
    return -1;
}

int main() {
   
   char ch[7];
   scanf("%s",ch);
   printf("%s",ch);
   int res=check(ch,strlen(ch));
   printf("%d",res);
  
    
	//code
	return 0;
}