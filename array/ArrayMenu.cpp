#include<iostream>
#include "ArrayMenu.h"
#include "Array.h"

using namespace std;

void arrayMenu(){
	int cap;
	cout<<"\nEnter array Capacity:";
	cin >> cap;

	ArrayDS arr(cap);

	int choice, value;

	do {
		cout << "\n===========================================";
		cout << "\n--- Array Menu ---";
		cout << "\n1. Insert All Elements";
        	cout << "\n2. Insert at Last";
        	cout << "\n3. Insert at First";
        	cout << "\n4. Linear Search";
		cout << "\n5. Binary Search";
        	cout << "\n6. Display";
        	cout << "\n0. Back";
        	cout << "\nEnter choice: ";
        	cin >> choice;
		cout << "\n===========================================";

		switch(choice){
			case 1:
				cout<<"\nCapacity of array is "<<arr.getCapacity()<<endl;
				cout<<"\n Enter elements one per line";
				arr.insertAllElements();
				break;
			case 2:
				cout<<"\nEnter value:";
				cin>>value;
				arr.insertLast(value);
				break;
			case 3:
				cout<<"\nEnter value:";
				cin>>value;
				arr.insertFirst(value);
				break;
			case 4:
				cout<<"\nEnter value to search its index:";
				cin >> value;
				int index;
				index = arr.linearSearchIndex(value);
				if (index == -1)
					cout<<"\n value not found in the array!";
				else
					cout<<"\n Found at index "<<index<<endl;
				break;
			case 5:
				//check if array is in ascending order IF NOT the run bubble sort
				if(!arr.isAscending()) {
					arr.bubbleSort();
					cout<<"\n Array is now bubbly sorted";
					arr.display();
				}
				else	cout<<"\n Array is already ascendingly sorted."<<endl;

				cout<<"\nBinary Search to be done\nEnter value to search its index:";
				cin >> value;
				index = arr.binarySearchIndex(value);
				if (index == -1)
					cout<<"\n value not found in the array!";
				else
					cout<<"\n Found at index "<<index<<endl;
				break;
			case 6:
				arr.display();
				break;
		}
	}while(choice !=0);
}
