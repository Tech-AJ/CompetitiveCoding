
#include <iostream>
using namespace std;
string c[20],d[20];
short counta=0,countb=0,k=0;

void calcworda(string e,short n)
{
for(short i=0;i<n;i++)
{
    if(e[i] == ' ')
        counta++;
    else                                   // to convert each line into individual words
      c[counta]+=e[i];
  }
 }
 
 void calcwordb(string e,short n)
{
for(short i=0;i<n;i++)
{
    if(e[i] == ' ')
        countb++;
    else                                        // to convert each line into individual words
      d[countb]+=e[i];
  }
 }
 void addstring()
 {
     for(int i=0;i<=countb;i++)
     {
         if(d[i][0]!='{')
         {
             cout<<d[i];
         }
         else if((d[i][1]>='a'&&d[i][1]<='z')||((d[i][1]>='A'&&d[i][1]<='Z')))
         {
             for(int j=1;j<d[i].length()-1;j++)        // case when  braces consist of word like{apoo}
             
             cout<<d[i][j];
         }
         else if(d[i][1]=='}')
         {
             cout<<c[k++];
         }
         else 
         {     int num=int(d[i][1]);
                num=num-48;                                          // converting ASCII value of digit 0-9 to actual digi
                if(counta>=(num) && d[i][2]=='}')               // ASCII value of 0 is 48
                cout<<c[num];
                else                       // code aplicable only for max no of words in replacement array is 9 
                 { for(int j=1;j<d[i].length()-1;j++)      // case when  braces consist of no greater than 9
                     cout<<d[i][j];
                 }
          }
         cout<<" ";
     }
 }
int main() {
    string a;
    string b;
    
    getline(cin,a);
    getline(cin,b);


    calcworda(a,a.length());
    calcwordb(b,b.length());
    addstring();
    return 0;
}
