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


<<<<<<< HEAD
void Fashion::printInventory(item *foundItems, int stockSize){
	for(int i = 0; i < stockSize; i++){
=======
void Fashion::printInventory(item *foundItems, int sizeStock)
{
	for(int i = 0; i < sizeStock; i++){
>>>>>>> a81745cedc0f6e2236292baf419643390f245946
		cout<<"Name: "<<foundItems[i].name<<endl;
	}
}
