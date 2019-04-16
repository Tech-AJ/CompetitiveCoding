#include<stdio.h>
char code[100];
int main(){

 scanf("%s",&code);
short flag=1;
 int len=strlen(s);
 int sum=0;
if((len>12 && code[13]=='.'){

 for(int i=0;i<12;i++){

  if(i==0){
   if(code[i]=='9'){
       sum+=code[i]-'0';
      if(code[++i]=='7'){
            sum+=code[i]-'0';
          ++i;
          if(code[i]=='8'||code[i]=='9'){
                sum+=code[i]-'0';
              continue;
          }
      }

   }
   flag=0;
   break;

  }
  else if(i==3 || i==5 || i==11){
      if(a[i]!='-')
       flag=0;
       break;
  }
  else if(i==4){
      if((code[i]>='0'&&code[i]<='5')||( code[i]=='7'))
       sum+=code[i]-'0';
       else{
           flag=0;
         break;
       }

  }
  else if (i>5 && i<11){

      if(code[i]>='0'&& code[i]<='9'){
            sum+=code[i]-'0';
      }else{
         flag=0;
         break;
      }
  }

 }


}  else {
      flag=0;
         break;
 }


if(flag){
     sum=(10-(sum%10))%10;
    if((code[12]-'0')==sum)
    printf("VALID");
    else flag=0;

}
if(!flag)
 printf("INVALID");
return 0;
}