//https://www.hackerrank.com/challenges/counting-valleys/
Gary is an avid hiker. He tracks his hikes meticulously, paying close attention to small details like topography.
During his last hike he took exactly steps. For every step he took, he noted if it was an uphill, , or a downhill, step. 
Gary's hikes start and end at sea level and each step up or down represents a unit change in altitude. We define the following terms:

    A mountain is a sequence of consecutive steps above sea level, starting with a step up from sea level 
    and ending with a step down to sea level.
    A valley is a sequence of consecutive steps below sea level, starting with a step down from sea level 
    and ending with a step up to sea level.

Given Gary's sequence of up and down steps during his last hike, find and print the number of valleys he walked through. 

// Complete the countingValleys function below.
int countingValleys(int n, string s) {

int valley=0,step=0;

for(int i =0;i< s.length();i++){

if(s[i]=='U')
 step++;
 else
 step--;

if(step==0&&s[i]=='U')
valley++;

}
return valley;

}
