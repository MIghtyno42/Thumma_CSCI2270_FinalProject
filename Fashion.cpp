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
        //cout<<"first for loop"<<endl;
		if(searchItems[i].typeBarCode == filterType){
			counter++;
		}
	}
	item *afterType = new item[counter+1];
	/*for(int j = 0; j < counter+1; j++){
	    cout<<"second for loop"<<endl;
        afterType[j].nameBarCode = -1;
    }*/
    int s = 0;
	for(int i = 0; i < sizeStock; i++){
	   // cout<<"third for loop"<<endl;
		if(searchItems[i].typeBarCode == filterType){
		   // cout<<"if conditional statement"<<endl;
			afterType[s].name = searchItems[i].name;
			afterType[s].nameBarCode = searchItems[i].nameBarCode;
			afterType[s].type = searchItems[i].type;
			afterType[s].typeBarCode = searchItems[i].typeBarCode;
			afterType[s].color = searchItems[i].color;
			afterType[s].colorBarCode = searchItems[i].colorBarCode;
			afterType[s].style = searchItems[i].style;
			afterType[s].styleBarCode = searchItems[i].styleBarCode;
			s++;
			cout<<s<<endl;
		}
	}
	testingPrint(afterType, s);
}

void Fashion::testingPrint(item *filterItems, int filterItemsSize){
    for(int i = 0; i < filterItemsSize; i++){
        //if(filterItems[i].nameBarCode != -1){
            cout<<filterItems[i].name<<endl;
            cout<<filterItems[i].type<<endl;
        //}
    }
}


