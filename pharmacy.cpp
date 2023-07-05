#include <iostream>
#include <string>

using namespace std;

class Pharmacy {
   private:
       string medicine_name;
       int price;
       string expiry_date;
       char name;
       int id;
       string pay;
   public:
       Pharmacy(string medicine_name, int price, string expiry_date) {
           this->medicine_name = medicine_name;
           this->price = price;
           this->expiry_date = expiry_date;
       }

       string getMedicineName() {
           return this->medicine_name;
       }

       int getPrice() {
           return this->price;
       }

       string getExpiryDate() {
           return this->expiry_date;
       }

       void setMedicineName(string medicine_name) {
           this->medicine_name = medicine_name;
       }

       void setPrice(int price) {
           this->price = price;
       }

       void setExpiryDate(string expiry_date) {
           this->expiry_date = expiry_date; }



void add()

{

cout <<  "Enter medicine name you want to add: ";

cin >> medicine_name;



cout << "Enter medicine's price: ";

cin >> price;



cout << "Enter medicine's expiry date: ";

cin >> expiry_date;

}
void del()
{
	
medicine_name = "";

price = 0;

int expiry_date = 0;

}



void insert()

{

cout <<  "Enter your name: ";

cin >>  name;



cout << "Enter your id: ";

cin >> id;



cout << "Enter method of payment you want to choose:";

cin >> pay;

}



void display(int medicine_name, int price)

{

cout << "Medicine's name: " << medicine_name <<endl;
cout << "Medicine's price: " << price << endl;
cout << "Medicine's expiry date: " << expiry_date << endl;

}

};



int main()

{
char choice;
do{

		cout << "\t\t\t\t\t         MAIN MENU         " << endl;
		cout << "\t\t\t\t\t****************************" << endl;
		cout << "\t\t\t\t\t     1 -- Add Medicine" << endl;
		cout << "\t\t\t\t\t     2 -- Update Cart" << endl;
		cout << "\t\t\t\t\t     3 -- Delete Items" << endl;
		cout << "\t\t\t\t\t     4 -- Insert Account Details" << endl;
		cout << "\t\t\t\t\t     5 -- Exit" << endl;
		cout << endl << "\t\t\t\t\tEnter your selection(1-5): ";	
		cin>> choice;		
	
		switch(choice)
		{
			case '1':
				void add();
				break;
			case '2':
				void update();
				break;
			case '3':
				void del();
			    break;
			case '4':
			    void insert();
				break;
			case '5':
				cout<<"\n\n\n\n\n\n\n\n\t\t\t\tThanks for using our PHARMACY!";
				break;	
		}
	
	}
	while(choice!='5');
return 0;
}
