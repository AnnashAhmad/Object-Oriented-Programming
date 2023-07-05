#include <iostream>
#include <string>
using namespace std;
class PharmaceuticalCompany
{
private:
string medicine_name;
int price;
int expiry_date;

public:
PharmaceuticalCompany(){ 

}
PharmaceuticalCompany(string m,int p, int ed){
    medicine_name = m;
    price = p;
    expiry_date = ed;
} 

void Assign(string m,int p, int ed){
    medicine_name = m;
    price = p;
    expiry_date = ed;
}

void add(){
}

void update(){
}

void del_items(){
}

void insert(){
}
void display(){ 

cout<<"Medicine's Name is : " << medicine_name <<endl;
cout<<"Price of the Medicine is : "<< price <<endl;
cout<<"Expiry date of medicine: "<<expiry_date <<endl;
};
int main(){
char choice;
	do{
		system("cls");
		cout << endl << endl << endl;
		cout << "\t\t\t\t\t   Pharmaceutical Store    " << endl;
		cout << endl << endl << endl;
		cout << "\t\t\t\t\t****************************" << endl;
		cout << "\t\t\t\t\t         MAIN MENU         " << endl;
		cout << "\t\t\t\t\t****************************" << endl;
		cout << "\t\t\t\t\t     1 -- Create New ID" << endl;
		cout << "\t\t\t\t\t     2 -- Add Medicine" << endl;
		cout << "\t\t\t\t\t     3 -- Update Payment Methods" << endl;
		cout << "\t\t\t\t\t     4 -- Delete Items" << endl;
		cout << "\t\t\t\t\t     5 -- Insert Account Details" << endl;
		cout << "\t\t\t\t\t     6 -- Exit" << endl;
		cout << endl << "\t\t\t\t\tEnter your selection(1-6): ";
	    cin>> choice;		
		system("cls");
		switch(choice)
		{
			case '1':
				cout << "\n\n\t\t\t\t\t****************************************" << endl;
				cout << "\t\t\t\t\t\t       Create User Id         " << endl;
				cout << "\t\t\t\t\t****************************************" << endl;
				int n;
				cout<<"\n\tPLease set any integers as your User ID: ";
				while(!(cin>> n)) {   
					cout<<"\n\tInvalid input. Only integers allowed!";
					cout<<"\n\n\tPLease set any integers as your User ID: ";
					cin.clear(); //clearing wrong input
					cin.ignore(100,'\n'); //discarding the wrong input
					cin>>n;
					break;}
				for(int i; i<n ; i++){
					cout<<"\n\tEnter ID "<<i+1<<" details"<<endl;
				}
				break;
			case '2':
				add();
				break;
			case '3':
				update();
				break;
			case '4':
				del_items();
			    break;
			case '5':
			    insert();
				break;
			case '6':
				cout<<"\n\n\n\n\n\n\n\n\t\t\t\tThanks for using our BANK MANAGEMENT SYSTEM!";
				break;
			default :cout<<"\a";	
		}
		cin.ignore();
		cin.get();
	}
	while(choice!='6');
return 0;
}
};
