#include<iostream>
using namespace std;
main(){
	float weight;
	float height;
	cout<<"Your Weight <kg>:";
	cin>>weight;
	cout<<"Your Height <Cm>:";
	cin>>height;
	height = height/100;
	height = height*height;
	float bmi;
	bmi = weight/height;
	cout<<"Your BMI :"<<bmi;
	int r;
	cin>>r;
}

