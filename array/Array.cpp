#include<iostream>
#include "Array.h"

using namespace std;

ArrayDS::ArrayDS(int cap) {
	capacity = cap;
	size=0;
	data = new int[capacity];
}

ArrayDS::~ArrayDS(){
	delete[] data;
}

void ArrayDS::insertLast(int value) {
	if(size == capacity) {
		cout<<"Array is full\n";
		return;
	}
	data[size++] = value;
}

void ArrayDS::insertFirst(int value) {
	if (size == capacity){
		cout<<"Array is full\n";
		return;
	}

	for(int i=size; i>0; i--){
		data[i] = data[i-1];
	}
	data[0] = value;
	size++;
}

int ArrayDS::linearSearchIndex(int key) {
	for (int i=0; i < size; i++) {
		if(data[i] == key)	return i;
	}
	return -1;
}

int ArrayDS::binarySearchIndex(int key) {
	int low = 0;
	int high = this->size;

	while(low<=high){
		int mid = low + (high - low)/2;

		if(this->data[mid] == key)	return mid;
		else if(this->data[mid] > key)  high = mid - 1;
		else if(this->data[mid] < key)  low  = mid + 1;
	}
	return -1;
}

bool ArrayDS::isAscending(){
	for(int i=1; i<size; i++){
		if(data[i] < data[i-1])
			return false;
	}
	return true;
}

void ArrayDS::display(){
	if(size == 0){
		cout<<"\nArray is empty\n";
		return;
	}
	cout<<endl;
	for (int i=0; i<size; i++){
		cout<<data[i] <<" ";
	}
	cout<<endl;
}

void ArrayDS::bubbleSort(){
	int temp;
	for(int i=0; i<size; i++){
		for(int j=i; j<size; j++){
			if (this->data[i] > this->data[j]){
				temp = data[i];
				this->data[i] = this->data[j];
				this->data[j] = temp;
			}
		}
	}
}

void ArrayDS::insertAllElements(){
	for(int i=0; i<capacity; i++){
		cin>>this->data[size++];
	}
}

int ArrayDS::getCapacity(){
	return capacity;
}
