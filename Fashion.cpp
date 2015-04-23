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

void Fashion::searchInventory(item *searchItems, int sizeStock, int searchItem){
    for(int i = 0; i < sizeStock; i++){
        if(searchItems[i] == searchItem){
            cout<<searchItem[i].name<<endl;
            cout<<searchItem[i].type<<endl;
            cout<<searchItem[i].color<<endl;
            cout<<searchItem[i].style<<endl;
        }
    }

}

void Fashion::printInventory(item *foundItems, int sizeStock)
{
	for(int i = 0; i < sizeStock; i++){
		cout<<"Name: "<<foundItems[i].name<<endl;
		cout<<"Type:" <<foundItems[i].type<<endl;
		cout<<"Color:" <<foundItems[i].color<<endl;
		cout<<"Style:" <<foundItems[i].style<<endl;
	}
}
