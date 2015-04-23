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
	//int number;
	std::string sname;
	int name;
	std::string stype;
	int type;
	std::string scolor;
	int color;
	std::string sstyle;
	int style;
};


class Fashion
{
    public:
        Fashion();
        ~Fashion();
        void printInventory(item *array, int size);

    protected:
    private:

};

#endif 

