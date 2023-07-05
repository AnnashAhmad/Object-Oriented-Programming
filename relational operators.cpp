#include<iostream>
using namespace std;
int main (){
	int a=111;
	int i=34;
	int j=34;
	
	if(a==i){
		cout<<"a and i are equal"<<endl;
	}else{
		cout<<"a and i are not equal"<<endl;
	}
	
	if(i!=j){
		cout<<"i and j are not equal"<<endl;
	}else{
		cout<<"i and j are equal"<<endl;
	}
	
	if(a>i){
		cout<<"a is greater than i"<<endl;
	}else{
		cout<<"a is not greater than i"<<endl;
	}
	
	if(i<j){
		cout<<"i is less than j"<<endl;
	}else{
		cout<<"i is not less than j"<<endl;
	}
	
	if(a>=i){
		cout<<"a is greater than or equal to i"<<endl;
	}else{
		cout<<"a is not greater than or equal to i"<<endl;
	}
	
	if(i<=j){
		cout<<"i is less than or equal to j"<<endl;
	}else{
		cout<<"i is not less than or equal to j"<<endl;
	}
	
return 0;	
}
