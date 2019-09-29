
/*
Given an integer n, generate a square matrix filled with elements from 1 to n2 in spiral order.

Example:

Given n = 3,

You should return the following matrix:
[ [ 1, 2, 3 ], [ 8, 9, 4 ], [ 7, 6, 5 ] ]
*/

vector<vector<int> > Solution::generateMatrix(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
vector<vector<int> > result;
result.resize(A);
for(int i = 0; i < A; i++)        //  vector<vector<int> >  result(A, vector<int>(A));
{
   
    result[i].resize(A);
}
int row=A;
	int col=A;
	int T,B,R,L,i;
	int count=0;
	T=0;
	B=row-1;
	L=0;
	R=col-1;
	int dir=0; //dir 1=l to r
	while(T<=B && L<=R){
	    if(dir==0){
	        for(i=L;i<=R;i++){
	            result[T][i]=(++count);
	        }
	        T++;
	        dir=1;
	    }
	    else if(dir==1){      //top to bottom
	        for(i=T;i<=B;i++){
	             result[i][R]=(++count);
	        }
	        R--;
	        dir=2;
	    }
	    else if(dir==2){
	        for(i=R;i>=L;i--){
	            // result.push_back(A[B][i]);
	             result[B][i]=(++count);
	        }
	        B--;
	        dir=3;
	   }
	   else if(dir==3){
	       for(i=B;i>=T;i--){
	          // result.push_back(A[i][L]);
	           result[i][L]=(++count);
	       }
	       L++;
	       dir=0;
	   }

	}

	return result;
    
    
}
