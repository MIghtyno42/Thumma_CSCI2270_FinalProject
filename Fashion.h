//Deekshitha Thumma and Christine Samson
//Hoenigman 2270 - Data Structures
//Final Project
//Santhanaraman Ganesh

#ifndef FASHION_H
#define FASHION_H

#include<string>
#include<iostream>


struct item{
	std::string name;
	int nameBarCode;
	std::string type;
	int typeBarCode;
	std::string color;
	int colorBarCode;
	std::string style;
	int styleBarCode;
	bool inCart = false;

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
        void filterType(item *searchItems, int sizeStock, int filterType);
        void setPrint(item *filterItems, int filterItemsSize);
        void filterStyle(item *searchItems, int sizeStock, int filterStyle);
        void filterColor(item *searchItems, int sizeStock, int filterColor);
        int barCode(std::string word);
        item *quickSort(item *arr, int left, int right);
        void shoppingCart(item *shoppingItems, int sizeStock);
    protected:
    private:
        item *stock;
        int sizeStock;
        bool typeDone = false;
        bool colorDone = false;
        bool styleDone = false;

};

#endif

