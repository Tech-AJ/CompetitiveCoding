/*Given a number N, find all factors of N.

Example:

N = 6 
factors = {1, 2, 3, 6}

Make sure the returned array is sorted.*/



vector<int> Solution::allFactors(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
        vector<int> result;
        int n=pow(A,.5);
        
        for(int i=1;i<n;i++){
            if(A%i==0){
            result.push_back(i);
            result.push_back(A/i);
            
                
            }
        }
        if(A%n==0){
            
        
        result.push_back(n);
            if(A/n!=n)
            result.push_back(A/n);
            
        }
        
        sort(result.begin(),result.end());
        return result;
    
    
}
