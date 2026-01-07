#ifndef ARRAY_DS_H
#define ARRAY_DS_H

class ArrayDS {
	public:
		ArrayDS(int capacity);
		~ArrayDS();

		void insertLast(int value);
		void insertFirst(int value);
		void display();
		int linearSearchIndex(int skey);
		int binarySearchIndex(int skey);
		bool isAscending();
		void bubbleSort();
	private:
		int* data;
		int size;
		int capacity;
};

#endif

