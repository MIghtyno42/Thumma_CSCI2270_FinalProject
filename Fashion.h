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
        void printInventory(item *foundItems, int stockSize);
        void searchName(item *searchItems, int sizeStock, int searchName);
        void searchColor(item *searchItems, int sizeStock, int searchColor);
        void searchType(item *searchItems, int sizeStock, int searchType);
        void searchStyle(item *searchItems, int sizeStock, int searchStyle);
        item *filterType(item *searchItems, int sizeStock, int filterType);
    protected:
    private:
        item *stock;
        int sizeStock;


};

#endif

