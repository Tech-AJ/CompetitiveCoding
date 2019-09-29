//http://www.spoj.com/problems/FASHION/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	// your code here
	int n,tot;
	cin>>tot;
	do{
	   scanf("%d",&n);
	int a[n],b[n],num=0,sum=0;
	for(int i=0;i<n;i++)
    scanf("%d",&a[i],&b[i]);
	for(int i=0;i<n;i++){
    scanf("%d",&b[i]);
	
	}
	sort(a,a+n);
	sort(b,b+n);
	for(int i=0;i<n;i++){
    sum+=(a[i]*b[i]);
	
	}
	printf("%d\n",sum);
	tot--;
}while(tot);
	return 0;
}
