

/*Given a set of distinct integers, S, return all possible subsets.

    Note:

        Elements in a subset must be in non-descending order.
        The solution set must not contain duplicate subsets.
        Also, the subsets should be sorted in ascending ( lexicographic ) order.
        The list is not necessarily sorted.

Example :

If S = [1,2,3], a solution is:

[
  [],
  [1],
  [1, 2],
  [1, 2, 3],
  [1, 3],
  [2],
  [2, 3],
  [3],
]*/

vector<vector<int> > Solution::subsets(vector<int> &A) {
      int s=pow(2,A.size());
vector<vector<int> > sol(s);
        sort(A.begin(),A.end());
        int i=0;
        //sol[i].push_back();
        for( i=1;i<s;i++){
             for(int j=0;j<A.size();j++){
             
             
               // (1<<j) is a number with jth bit 1
                // so when we 'and' them with the
                // subset number we get which numbers
                // are present in the subset and which
                // are not
                
                
                 if(i & (1 << j))         
                 sol[i].push_back(A[j]);
                
                 
             }
            
        }
        sort(sol.begin(),sol.end());
        sol.erase(unique(sol.begin(),sol.end()) , sol.end());
                        // to remove duplicate elements
                        //unique returns iterator to last element after shifting unique elements to left over duplicate elements
        return sol;
        
        
    
}


