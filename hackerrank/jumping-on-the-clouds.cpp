//https://www.hackerrank.com/challenges/jumping-on-the-clouds/
// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c) {
int jump=0;
int size=c.size();
 for(int i=0;i<size-1;){
 if(i+2<size && (c[i+2]==0))
  i+=2;
  else
  i++;
  jump++;
 }
 return jump;
}
