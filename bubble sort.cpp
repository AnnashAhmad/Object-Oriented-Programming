#include<iostream>
using namespace std;
int main ()
{
	int i,j,temp,p=0;
	int array[6] = {02,23,50,01,03,55};
	cout <<"The Elements list provided is:"<<endl;
	for(i = 0; i<10; i++) {
		cout <<array[i]<<"\t";}
	
	for(i = 0; i<10; i++) {
		for(j = i+1; j<10; j++){
			if(array[j] < array[i]) {
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;}
		}
	p++;
	}
	cout <<"\n The Elements sorted in ascending order are:"<<endl;
	for(i = 0; i<10; i++) {
		cout <<array[i]<<"\t";
		}
	cout<<"\nNumber of passes taken to sort the list:"<<p<<endl;
	return 0;
}

