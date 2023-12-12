#include <iostream>
#include<cmath>
using namespace std;
int main(){
	float xA,yA,xB,yB;
	cin>>xA>>yA>>xB>>yB;
	float AB;
	AB=sqrt(pow(xB-xA,2)+pow(yB-yA,2));
	cout<<"|AB| = "<<AB;
	return 0;
}