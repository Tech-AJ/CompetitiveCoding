Implement pow(A, B) % C.

In other words, given A, B and C,
find (AB)%C.

Input : A = 2, B = 3, C = 3
Return : 2 
2^3 % 3 = 8 % 3 = 2

input: A=-2 B=1 C=6
return 4



int Solution::Mod(int A, int B, int C) {
   // A^B %C = ((A%C)*(B%C))%C
   
   
   if(C==0)
   return 0; // divide by zero error 
   int n=B;
   int x=A,p=C;
   if (n == 0) return 1 % p;
                long long y = 0;        
                if (n % 2 == 0) {
                    y = Mod(x, n/2, p);
                    y = (y * y) % p;
                } else {
                    y = x % p;
                    y = (y * Mod(x, n - 1, p)) % p;
                }
                // Incase y is negative.
                if(y<0)
                return ((y + p) );
                else 
                return y;

  
}
