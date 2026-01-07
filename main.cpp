#include<iostream>
#include "ArrayMenu.h"

using namespace std;

int main(){
	int choice;
	do {
		cout<<"\n ----------------- Data Sturctures Menu -------------------";
		cout<<"\n 1. Array";
		cout<<"\n 2. Singly Linked List";
		cout<<"\n 3. Doubly Linked List";
		cout<<"\n 4. Circular Linked List";
		cout<<"\n 5. Stack";
		cout<<"\n 6. Queue";
		cout<<"\n 0. Exit";
		cin >> choice;

		switch(choice){
			case 1:
				arrayMenu();
				break;
			case 2:
				cout<<"WIP";
				//sllMenu();
				break;
			case 3:
				cout<<"WIP";
				//dllMenu();
				break;
			case 4:
				cout<<"WIP";
				//cllMenu();
				break;
			case 5:
				cout<<"WIP";
				//stackMenu();
				break;
			case 6:
				cout<<"WIP";
				//queueMenu();
				break;
			default:
				cout<<"\n\t\tInvalid Choice";
			}
	} while(choice !=0);

	return 0;
}
