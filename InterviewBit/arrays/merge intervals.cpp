/*
Given a set of non-overlapping intervals, insert a new interval into the intervals (merge if necessary).

You may assume that the intervals were initially sorted according to their start times.

Example 1:

Given intervals [1,3],[6,9] insert and merge [2,5] would result in [1,5],[6,9].

Example 2:

Given [1,2],[3,5],[6,7],[8,10],[12,16], insert and merge [4,9] would result in [1,2],[3,10],[12,16].

This is because the new interval [4,9] overlaps with [3,5],[6,7],[8,10].

Make sure the returned intervals are also sorted*/


/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
       int size=intervals.size();
       vector<Interval> result;
       if(intervals.size()==0){
           result.push_back(newInterval);
           return result;
       }
       int A=newInterval.start;
       int B=newInterval.end;
       int flag=0;
       
       if(intervals[0].start>B)
       result.push_back(newInterval);
       for(int i=0;i<size;i++){
           
           if(max(intervals[i].start,A)>min(intervals[i].end,B)){
           result.push_back(intervals[i]);
           if((intervals[i].end<A)&&(intervals[i+1].start>B))
            result.push_back(newInterval);
           }
            
           else {
               int temp=i;
               while(!(max(intervals[i].start,A)>min(intervals[i].end,B)))
               i++;
               i--;
               
               Interval inter;
               inter.start=min(intervals[temp].start,A);
               inter.end=max(intervals[i].end,B);
               result.push_back(inter);
               i++;
               flag=1;
               while(i<size){
                   result.push_back(intervals[i]); 
                   i++;
               }
           }
           
          
       }
       
       if(flag==0){
           if(intervals[size-1].end<A)
           {result.push_back(newInterval);}
       }
       return result;
           
       
    
    
}
