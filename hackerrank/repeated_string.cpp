https://www.hackerrank.com/challenges/repeated-string/
/*Lilah has a string,s, of lowercase English letters that she repeated infinitely many times.
Given an integer,n, find and print the number of letter a's in the first n letters of Lilah's infinite string.
*/
// Complete the repeatedString function below.
long repeatedString(string s, long n) {
int len=s.length();

long count=0;
long multiple=n/len;
long rem=n%len;

while(len--){      // count a in whole string
if(s[len]=='a')
  count++;
}
count*=multiple;
while(rem--){        // count a in remainder of n string
if(s[rem]=='a')
  count++;

}

  return count;

}
