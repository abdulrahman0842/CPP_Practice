#include<iostream>

using namespace std;

int addition(int a,int b){
	int sum = a+b;
	return sum;
}
int substraction(int a,int b){
	int sub = a-b;
	return sub;
}
int division(int a,int b){
	float div = (float)a/(float)b;
	return div;
}
int multiplication(int a,int b){
	int mult = a*b;
	return mult;
}

int main(){
	
	int num1,num2;
	int opr;
	cout<<"Enter 1st No.\t";
	cin>>num1;	
	cout<<"Enter 2nd No.\t";	
	cin>>num2;
	cout<<"Press:\n 1 for Addition  2 for Substraction \n 3 for Division  4 for Multiplicatoon\n";
	cin>>opr;
	if(opr==1){
		cout<<"Sum of Two No. is "<<addition(num1,num2);
		
	}
	else if(opr==2){
		cout<<"Substraction of Two No. is "<<substraction(num1,num2);
		
	}
	else if(opr==3){
		cout<<"Division of Two No. is "<<division(num1,num2);
		
	}
	else if(opr==4){
		cout<<"Multiplication of Two No. is "<<multiplication(num1,num2);
			}
	else{
		cout<<"Invalid Choice!";
	}
	return 0;
}
