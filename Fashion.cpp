//Deekshitha Thumma and Christine Samson
//Hoenigman 2270
//Final Project
//April 20th

#include <iostream>
#include <string>
#include "Fashion.h"
#include <stdio.h>
#include <stdlib.h>
#include <cmath>

using namespace std;

//constructor
Fashion::Fashion(){

}

//destructor
Fashion::~Fashion(){

}


void Fashion::printInventory(item *foundItems, int sizeStock)
{
	for(int i = 0; i < sizeStock; i++){
		cout<<"Name:"<<foundItems[i].name<<endl;
		cout<<"Type:" <<foundItems[i].type<<endl;
		cout<<"Color:" <<foundItems[i].color<<endl;
		cout<<"Style:" <<foundItems[i].style<<endl;
	}
}


void Fashion::searchName(item *searchItems, int sizeStock, int searchName){
	for(int i = 0; i < sizeStock; i++){
		if(searchItems[i].nameBarCode == searchName){
			cout<<"Name:"<<searchItems[i].name<<endl;
			cout<<"Type:" <<searchItems[i].type<<endl;
			cout<<"Color:" <<searchItems[i].color<<endl;
			cout<<"Style:" <<searchItems[i].style<<endl;
		}
	}

}

void Fashion::searchColor(item *searchItems, int sizeStock, int searchColor){
    for(int i = 0; i < sizeStock; i++){
        if(searchItems[i].colorBarCode == searchColor){
            cout<<"Name:"<<searchItems[i].name<<endl;
			cout<<"Type:" <<searchItems[i].type<<endl;
			cout<<"Color:" <<searchItems[i].color<<endl;
			cout<<"Style:" <<searchItems[i].style<<endl;
        }
    }
}

void Fashion::searchType(item *searchItems, int sizeStock, int searchType){
    for(int i = 0; i < sizeStock; i++){
        if(searchItems[i].typeBarCode == searchType){
            cout<<"Name:"<<searchItems[i].name<<endl;
			cout<<"Type:" <<searchItems[i].type<<endl;
			cout<<"Color:" <<searchItems[i].color<<endl;
			cout<<"Style:" <<searchItems[i].style<<endl;
        }
    }
}

void Fashion::searchStyle(item *searchItems, int sizeStock, int searchStyle){
    for(int i = 0; i < sizeStock; i++){
        if(searchItems[i].styleBarCode == searchStyle){
            cout<<"Name:"<<searchItems[i].name<<endl;
			cout<<"Type:" <<searchItems[i].type<<endl;
			cout<<"Color:" <<searchItems[i].color<<endl;
			cout<<"Style:" <<searchItems[i].style<<endl;
        }
    }
}

//void Fashion::filterInventory(item *searchItems, int sizeStock, int filterColor, int filterStyle, int filterType){


//}

void Fashion::filterType(item *searchItems, int sizeStock, int filterType){
	int counter = 0;
	for(int i = 0; i < sizeStock; i++){
		if(searchItems[i].typeBarCode == filterType){
			counter++;
		}
	}
	item *afterType = new item[counter];
	for(int j = 0; j < counter; j++){
        afterType[j].nameBarCode = -1;
    }
	for(int i = 0; i < sizeStock; i++){
		if(searchItems[i].nameBarCode == filterType)
		{
			searchItems[i].name = afterType[counter].name;
			searchItems[i].nameBarCode = afterType[counter].nameBarCode;
			searchItems[i].type = afterType[counter].type;
			searchItems[i].typeBarCode = afterType[counter].typeBarCode;
			searchItems[i].color = afterType[counter].color;
			searchItems[i].colorBarCode = afterType[counter].colorBarCode;
			searchItems[i].style = afterType[counter].style;
			searchItems[i].styleBarCode = afterType[counter].styleBarCode;
		}
	}
	testingPrint(afterType);
}

void Fashion::testingPrint(item *filterItems){
    for(int i = 0; i < 30; i++){
        while(filterItems[i].nameBarCode != -1){
            cout<<filterItems[i].name<<endl;
            cout<<filterItems[i].type<<endl;
        }
    }

}


