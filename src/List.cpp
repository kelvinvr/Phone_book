/*
 * List.cpp
 *
 *  Created on: May 22, 2016
 *      Author: raydelto -> modified by Carlos Sosa
 */

#include "List.h"
#include <iostream>
#include <cstdlib>
#include <istream>
#include <stdio.h>
#include <iostream>
using namespace std;

struct PhoneList{
		char Name[200];
		char Phone[20];

		struct PhoneList *Next;
		struct PhoneList *Back;

	};
struct PhoneList *First,*Last;

List::List(): _first(NULL), _last(NULL)
{
	struct PhoneList *ListGetAll;
	int i;
	i=0;

	ListGetAll = First;
	cout<<"Full List" << endl;

	while(ListGetAll!=NULL){
	printf("Name: %s, Phone Number: %S \n",
		ListGetAll->Name,ListGetAll->Phone);
		ListGetAll =ListGetAll->Next;
		i++;


	}
	if(i==0)
	{
		printf("\n There aren't Phone numbers in the list");
	};

}

void List::add()
{
	//TODO: Implement this method

struct PhoneList *AddOne;

//reserving memory
AddOne = (struct PhoneList *)malloc(sizeof(struct PhoneList));

//prevention null-entry
if(AddOne==NULL) cout<<"Warning! Not Null entries" <<endl;

//getting the data
cout <<"Insert the data" <<endl;
printf("Insert Name:"); fflush(stdout);
gets(AddOne->Name);
printf("Insert Phone number"); fflush(stdout);
gets(AddOne->Phone);

AddOne->Next =NULL;

//evaluate is the list is empty
if(First=NULL){
	cout<<"Names & Phones number" <<endl;
	First = AddOne;
	Last = AddOne;
}else{
	Last-> Next= AddOne;
	Last = AddOne;
	}
}

void List::remove(char a, char b)
{
	//TODO: Implement this method
	struct PhoneList *Erase;
	Erase= First, Last;
	if(Erase!=NULL){
		printf("Delete? press enter"); fflush(stdout);
		gets(Erase->Name);
		printf("Press to confirm"); fflush(stdout);
		gets(Erase->Phone);

		delete Erase->Name; delete Erase->Phone;
	}
	Erase-> Next = NULL;

	if(First=NULL){
		First= Erase;
		Last = Erase;
	}else{
		Last->Next= Erase;
		Last= Erase;
	}
}

void List::modify()
{
	//TODO: Implement this method
	cout << "You should write the code for modifying the content for index " << endl;

}
