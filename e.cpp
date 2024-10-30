#include<iostream>
using namespace std;

class Exception{
	public:
float division(float num1, float num2){
 	  if(num2 == 0){
 	 int errmsg=789;
 	  	 throw errmsg;
	   }
	 
 	return num1 /num2;
 	
 }	
};
 
int main(){
	Exception e;
	float num1,num2;
	
	cout<<"Enter any two numbers: "<<endl;
	cin>>num1>>num2;
	try{
		try{
			cout<<"Result :"<<e.division(num1,num2);
		}
		catch(string ){
			cout<<"Divide By Zero Error"<<endl;

		}
	}
	
	catch(...){
		cout<<"Do not enter zero as denominator value";
	}
	
	
}
