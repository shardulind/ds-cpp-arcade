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
		cout << "\n--- Array Menu ---";
        	cout << "\n1. Insert at Last";
        	cout << "\n2. Insert at First";
        	cout << "\n3. Linear Search";
		cout << "\n4. Binary Search";
        	cout << "\n4. Display";
        	cout << "\n0. Back";
        	cout << "\nEnter choice: ";
        	cin >> choice;

		switch(choice){
			case 1:
				cout<<"\nEnter value:";
				cin>>value;
				arr.insertLast(value);
				break;
			case 2:
				cout<<"\nEnter value:";
				cin>>value;
				arr.insertFirst(value);
				break;
			case 3:
				cout<<"\nEnter value to search its index:";
				cin >> value;
				int index;
				index = arr.linearSearchIndex(value);
				if (index == -1)
					cout<<"\n value not found in the array!";
				else
					cout<<"\n Found at index "<<index<<endl;
				break;
			case 4:
				//check if array is in ascending order IF NOT the run bubble sort
				if(!arr.isAscending()) {
					arr.bubbleSort();
					cout<<"\n Array is now bubbly sorted";
					arr.display();
				}
				cout<<"\nBinary Search to be done\nEnter value to search its index:";
				cin >> value;
				index = arr.binarySearchIndex(value);
				if (index == -1)
					cout<<"\n value not found in the array!";
				else
					cout<<"\n Found at index "<<index<<endl;
				break;
			case 5:
				arr.display();
				break;
		}
	}while(choice !=0);
}
