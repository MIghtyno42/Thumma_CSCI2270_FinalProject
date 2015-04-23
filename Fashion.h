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
	std::string name;
	int nameBarCode;
	std::string type;
	int typeBarCode;
	std::string color;
	int colorBarCode;
	std::string style;
	int styleBarCode;
	item(){};

};


class Fashion
{
    public:
        Fashion();
        ~Fashion();
        void printInventory(item *foundItems);

    protected:
    private:
        item *stock;
        int sizeStock;


};

#endif

