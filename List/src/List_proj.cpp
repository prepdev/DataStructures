//============================================================================
// Name        : List_proj.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "ArrayList/UnOrderedList.hpp"
#include <cstdlib>
#include <ctime>

int main() {
	cout <<endl <<"======= List Creation =========";
	UnOrderedList list1;
	UnOrderedList list2;
	UnOrderedList list3(5);

	cout <<endl <<"===== Size of Lists ==== ";
	cout <<endl <<"List 1 " <<list1.size();
	cout <<endl <<"List 2 " <<list2.size();
	cout <<endl <<"List 3 " <<list3.size();

	srand(time(NULL));
	for (int i = 0; i < 10; i++)
		list1.add(rand() %10 + 1);

	for (int i = 0 ; i < list1.length(); i++) {
		cout <<endl <<"Item = "<<list1[i];
	}

	list2 = list1;

	cout <<endl <<"===== List2 ==== ";


	for (int i = 0 ; i < list1.length(); i++) {
		cout <<endl <<"Item = "<<list2[i];
	}

	if (list1 == list2)
		cout <<endl <<"list1 is equals to list2";


	list1.removeEnd();
	if (list1 == list2)
		cout <<endl <<"list1 is equals to list2";
	else
		cout <<endl <<"list1 is not equals to list2";

	return 0;
}
