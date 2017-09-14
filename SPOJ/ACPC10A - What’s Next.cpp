#include <iostream>
using namespace std;

int main() {
	
	// your code here
int a,b,c;
cin>>a>>b>>c;
while(!((a==b)&&(b==c)&&(a==0))){
	int ap1,ap2, gp1;
	ap1=b-a;
	ap2=c-b;
	gp1=b/a;

	if(ap1==ap2)
	cout<<"AP "<<c+ap1<<"\n";
	else
	cout<<"GP "<<c*gp1<<"\n";
	cin>>a>>b>>c;
}

	return 0;
}
