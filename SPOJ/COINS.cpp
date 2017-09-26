//http://www.spoj.com/problems/COINS/
#include <iostream>
using namespace std;
#include <map>

map<int,unsigned int> dp;                            // use map else code won't work for higher ranges like 10^9
                                                     // standard dp with memorization

unsigned int solve(int n)
{
  // base case
  if (n <= 0)
      return 0;
  if (n == 1)
      return 1;

  // checking if already calculated
  if (dp[n])
      return dp[n];
unsigned int temp=0;
  // storing the result and returning
  temp = solve(n/2) + solve(n/3) + solve(n/4);
  if(n>temp)
  dp[n]=n;
  else
  dp[n]=temp;

  return dp[n];
}


int main() {

	// your code here
unsigned int num;
	cin>>num;


        do{
                
unsigned int sol=solve(num);
	cout<<sol<<endl;

		cin>>num;
	}while(cin);

	return 0;
}
