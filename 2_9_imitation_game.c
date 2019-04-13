/*
World War II is going on. Adolf Hitler is cruising ahead killing 
thousands of people on the way. They have made an unbreakable machine 
called ENIGMA which churns out encrypted sequence of 6 lowercase 
alphabetical characters. Britain has three vital pieces of information 
about ENIGMA

1. The decrypted messages are one of the following: "hitler", "gonazi", 
"attack", "german".  (NOTE: all decrypted messages are in lower case)
2. ENIGMA encrypts the sequence by substituting each character with Kth 
character before it in the alphabets.  Substitution is rotation based, 
i.e.,  the 'z' is the character 1 before  'a', 2 before 'b', and so on. 
3. K can vary from 0 to 25, for different messages.

The problem is, that it is humanly impossible to check each of the 26 
possibilities. You being Alan Turing, believe that only a machine can 
break a machine. :)

Your mission is to write a program which reads a sequence of 6 
characters, substitute the sequence using each of the 26 possibilities 
for K and check whether it matches with any of the decrypted messages. 
You have to return the value of K which does so. If no such K exists, 
return -1. 

Note: 
1. The input will be exactly 6 characters (continuous) on a single line,
 but not necessarily lower case alphabets.
2. Your answer must lie between 0 to 25. Substitution by 3 and 29 is 
same but you must return 3 and not 29, 55, 81 etc.)

Sample Cases:

Input: fgrjcp
Output: 2
Reason: If each character of hitler is moved 2 character back, we get 
fgrjcp. In other words, substituting f by h (2 characters ahead), g by i
 (2 characters ahead) and so on gives hitler.

Input: hpobaj
Output: 25
Reason: Substituting h by g (25 characters ahead), p by o (25 characters
 ahead) and so on gives gonazi.

Input: german
Output: 0
Reason: No substitutions required.

Input: gerMAN
Output: -1
Reason: You can not create any of the decrypted message from Input.

To help you, your colleagues have already written a function, "Decrypt" 
which takes 6 characters as input and check if this sequence matches 
with any of the decrypted messages. If a match is found, it returns 1, 
else 0.
This is how "Decrypt" works:
Decrypt('h', 'i', 't', 'l', 'e', 'r') returns 1
Decrypt('r, 'h', 'i', 't', 'l', 'e') returns 0
Decrypt('g', 'o', 'n', 'a', 'z', 'i') returns 1
Decrypt('g', 'o', 'a', 'r', 'm', 'y') returns 0

Note: The code is included for your reference, but it is not necessary 
to understand it.
int Decrypt(char ch1, char ch2, char ch3, char ch4, char ch5, char ch6)
{
	char test[7] = {ch1, ch2, ch3, ch4, ch5, ch6, '\0'};
	char *dict[4];
	dict[0] = "hitler"; dict[1] = "gonazi"; dict[2] = "attack"; dict[3] = 
"german";
        return   (strcmp(test, dict[0]) == 0)  //matches with "hitler" 
              || (strcmp(test, dict[1]) == 0)   //matches with "gonazi" 
         
              || (strcmp(test, dict[2]) == 0)   //matches with "attack"
              || (strcmp(test, dict[3]) == 0);  //matches with "german"
}
*/

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