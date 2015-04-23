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
Fashion::Fashion()
{

}

//destructor
Fashion::~Fashion()
{

}


Fashion::printInventory(item *array, int size)
{
	for(int i = 0;i<size; i++)
	{
		cout << "Name: " << array[i].sname << endl;
	}
