//https://www.hackerrank.com/challenges/coin-change/problem
//https://www.geeksforgeeks.org/coin-change-dp-7/

// Complete the getWays function below.
// n required sum  c available coin values

long getWays(long n, vector<long> c) {

int m = c.size();
long sol[n+1][m];
long includ,exclude;

for(int i=0;i<m;i++)
sol[0][i]=1;      // 0 rs required


for(int i=1;i<n+1;i++){
   for(int j=0;j<m;j++){

       includ= (c[j]>i)? 0:sol[i-c[j]][j];
       exclude=(j==0)? 0:sol[i][j-1];
       sol[i][j]=includ+exclude;
      cout<<sol[i][j];
   }
   cout<<"\n";
}
   return sol[n][m-1];


}
