#include <iostream>
using namespace std;
int main()
{
	int s, input,e, found = 0;
	cout<<"Enter size for the list: ";
	cin>>s;
	
	int list[s];
	cout<<"\nEnter the elements: "<<endl;
	cin>>e;
	
	for (int i = 0; i<s; i++){
		cin>>list[i];
	}
	
	cout<< "\nEnter the element you want to know position of: ";
	cin>>input;
	
	for (int i = 0; i<s; i++){
	if (input == e)
	{
		cout<<"\nPosition of element is: "<<e<<endl;
	}
}
	if (input != e){
		cout<<"\nElement found at: "<<i;
	}
	else{
		cout<<"\nElement not found";
	}
	return 0;
}

