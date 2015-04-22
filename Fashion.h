//Deekshitha Thumma and Christine Samson
//Hoenigman 2270
//Final Project
//April 20th

#ifndef FASHION_H
#define FASHION_H

#include<string>
#include<iostream>

using namespace std;

struct item{
	int number;
	string type;
	string color;
	string style;
	string size;
	item* parent;
	item* first_child;
	item* second_child;
	item* third_child;
	item* fourth_child;
	item* fifth_child;
	int quantity;
};


class Fashion
{
    public:
        Fashion();
        ~Fashion();
        void printInventory();
        void addItem();
        void deleteItem(); //if we are taking out one item with each buy?
        void searchItem();
    protected:
    private:

};

#endif

