// LinkedListJerry.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "LinkedList.h"
#include <iostream>
#include <iomanip>

template <class ItemType>
void printList(const LinkedList<ItemType>& aList);

using namespace std;
int main()
{
	LinkedList<int> jerryList =  LinkedList<int>();

	jerryList.insert(1, 1);
	jerryList.insert(2, 2);
	jerryList.insert(3, 3);
	jerryList.insert(4, 4);
	jerryList.insert(5, 5);

	printList(jerryList);

	//insert

	jerryList.setEntry(3, 10);

	printList(jerryList);

	jerryList.remove(3);
	
	printList(jerryList);

	jerryList.clear();

	printList(jerryList);

	cin.get();
	cin.get();
	
    return 0;
}
template<class ItemType>
void printList(const LinkedList<ItemType>& aList)
{
	cout << endl << endl;
	cout << "these are what is in the list: ";
		for (int i = 1; i < aList.getLength();i++)
		{
			cout << aList.getEntry(i) << " , ";
	}

}

