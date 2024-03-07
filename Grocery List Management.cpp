#include <iostream>
using namespace std;

class list{
	public:
		int codeno[50];
		int price[50];
		char name[30][50];
		int status[50];
		int quantity[50];
		int amount ;
		int count = 0;
		void add()
		{
			cout << "Enter item code: " << endl;
			cin >> codeno[count];
			cout << "Enter item name: " << endl;
			cin >> name[count];
			cout << "Enter price: " << endl;
			cin >> price[count];
			cout << "Enter quantity: " << endl;
			cin >> quantity[count];
			status[count] = 1;
			count ++;
			cout <<"\n" << endl;
		}
		void displaytotal()
		{
			amount = 0;
			for (int i=0;i<count;i++)
			{
				if (status[i] != 0)
				{
					amount = amount + quantity[i]*price[i];
				}
			}
			cout << "Total amount = Rs." << amount << endl;
			cout <<"\n";
		}
		void display()
		{
			cout <<"CodeNo \t Item Name \t Quantity \t Price Per Unit \t Total Price \t Status" << endl;
			for (int i=0;i<count;i++)
			{
				if (status[i]!=0)
					cout << codeno[i] <<"\t\t\t" << name[i] << "\t" << quantity[i] << "\t" << price[i] <<  "\t" << "\t" << price[i]*quantity[i] << status[i] << endl;
			}
			cout <<"Total items =" << count << endl;
			displaytotal();
		}
		void remove()
		{
			int x,i;
			int z=0;
			cout << "Enter code no to delete item " << endl;
			cin >> x;
			for (int i=0;i<count;i++)
			{
				if (codeno[i] == x)
				{
					status[i] = 0;
					z=1;
				}
			}
			if (z=0) cout <<"Item not found" << endl;
			cout <<"\n " ;
		}
		
};

int main()
{
	list ob;
	int x;
	do {
		cout <<"Choose \n 1.Add \n 2.Delete \n 3.Display list \n 4.Show total \n 5 Exit" << endl;
	cin >> x;
	switch (x)
		{
			case 1:
				{
					ob.add();
					break;
				}
			case 2:
				{
					ob.remove();
					break;
				}
			case 3:
				{
					ob.display();
					break;
				}	
			case 4:
				{
					ob.displaytotal();
					break;
				}	
			case 5:
				{
					break;
				}
			default: cout <<"Wrong value" << endl;
		}
	} while (x!=5);
}
