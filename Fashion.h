// Deekshitha Thumma
// Hoenigman 2270
// Final Project
// April 20th
// Partner: Christine Samson

#ifndef FASHION_H
#define FASHION_H

#include<string>
#include<iostream>


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
};


class Fashion
{
    public:
        Fashion();
        ~Fashion();
        void printInventory();

    protected:
    private:

};

#endif 

