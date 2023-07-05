#include<iostream>
using namespace std;

int main()
{
	int s,first,mid,end,i,n;
	cout << "Enter the size of array:";
	cin >> s;
	
	int array[s];
	cout << "Enter the elements for array:"<<endl;
	
	for(i=0; i<s ;i++){
		cin >> array[i];
		}   

   	first = 0;
   	end = s-1;

   	cout << "Enter number you want to know position of:"<<endl;
   	cin >> n;

   	while(first <= end){
      	mid = (first+end)/2;
      	if(n==array[mid])	{   
         	cout << "\nIt is at position: "<< (mid+1);
			 break;} 	
	  	else if (n <= array[mid]) {
			end=mid-1;}
		else if(n >= array[mid]) {
		first=mid+1;}
		
	  }
}
