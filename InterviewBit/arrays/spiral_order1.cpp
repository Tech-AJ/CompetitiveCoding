//Given a matrix of m * n elements (m rows, n columns), return all elements of the matrix in spiral order.
vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
	vector<int> result;
	// DO STUFF HERE AND POPULATE result
	int row=A.size();
	int col=A[0].size();
	int T,B,R,L,i;
	T=0;
	B=row-1;
	L=0;
	R=col-1;
	int dir=0; //dir 1=l to r
	while(T<=B && L<=R){
	    if(dir==0){
	        for(i=L;i<=R;i++){
	            result.push_back(A[T][i]);
	        }
	        T++;
	        dir=1;
	    }
	    else if(dir==1){      //top to bottom
	        for(i=T;i<=B;i++){
	             result.push_back(A[i][R]);
	        }
	        R--;
	        dir=2;
	    }
	    else if(dir==2){
	        for(i=R;i>=L;i--){
	             result.push_back(A[B][i]);
	        }
	        B--;
	        dir=3;
	   }
	   else if(dir==3){
	       for(i=B;i>=T;i--){
	           result.push_back(A[i][L]);
	       }
	       L++;
	       dir=0;
	   }
	    
	}
	
	return result;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
