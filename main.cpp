//Deekshitha Thumma and Christine Samson
//Hoenigman 2270
//Final Project
//April 20th

#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include "Fashion.h"

using namespace std;

int barCode(string word){
    int sum = 0;
    for(int i = 0 ; i < word.length(); i++){
        sum = sum + word[i];
    }
    return sum;
}

int main(int argc, char *argv[]){
	ifstream data;
    string token;
    data.open(argv[1]);  //read in argument as file


    int i = 0;
    //int number;   //item number
    int stockSize = 30;
    int nameBarCode;  //title
    string name;
    int typeBarCode;
    string type;
    int colorBarCode;
    string color;
    int styleBarCode;
    string style;
    string contents;

    item *stock = new item[stockSize];

    while(!data.eof()){
        //gathering the other data in the file
        std::getline(data, contents);
        if(contents != ""){
            //parsing the file
            size_t lastcomma = contents.find_last_of(",");
            size_t middlecomma = contents.find_last_of(",",lastcomma-1);
            size_t firstcomma = contents.find_last_of(",",middlecomma-1);
            //putting each word in its place
            name = contents.substr(0,firstcomma).c_str();
            type = contents.substr(firstcomma+1,(middlecomma-firstcomma-1)).c_str();
            color = contents.substr(middlecomma+1,(lastcomma-middlecomma-1)).c_str();
            style = contents.substr(lastcomma+1).c_str();
            //getting the bar code for each
            nameBarCode = barCode(name);
            typeBarCode = barCode(type);
            colorBarCode = barCode(color);
            styleBarCode = barCode(style);

            stock[i].name = name;
            stock[i].nameBarCode = nameBarCode;
            stock[i].type = type;
            stock[i].typeBarCode = typeBarCode;
            stock[i].color = color;
            stock[i].colorBarCode = colorBarCode;
            stock[i].style = style;
            stock[i].styleBarCode = styleBarCode;

            i++;
        }
    }
    /*for(int k = 0; k < stockSize; k++){
        cout<<"NAME "<<stock[k].name<<endl;
        cout<<"NAME BAR CODE "<<stock[k].nameBarCode<<endl;
        cout<<"TYPE "<<stock[k].type<<endl;
        cout<<"TYPE BAR CODE "<<stock[k].typeBarCode<<endl;
        cout<<"COLOR "<<stock[k].color<<endl;
        cout<<"COLOR BAR CODE "<<stock[k].colorBarCode<<endl;
        cout<<"STYLE "<<stock[k].style<<endl;
        cout<<"STYLE BAR CODE "<<stock[k].styleBarCode<<endl;
    }*/

	int command;
	Fashion inventory;

    string searchItem;

    while(command != 5)
    {
        cout<<"======Main Menu======"<<endl;
        cout<<"1. Print the inventory "<<endl;
        cout<<"2. Search for an item"<<endl;
        cout<<"3. "<<endl;
        cout<<"4. "<<endl;
        cout<<"5. "<<endl;

        cin >> command;
        cin.ignore(10000,'\n');

        switch(command){

            case 1:
				inventory.printInventory(stock, stockSize);
                break;
            case 2:
            {
				string searchItem;
				getline(cin, searchItem);
				int searchItemNumber = barCode(searchItem);
				if(searchItemNumber == nameBarCode){
                    inventory.searchName(stock, stockSize, searchItemNumber);
				}
				else if(searchItemNumber == typeBarCode){
                    inventory.filterType(stock, stockSize, searchItemNumber);
				}
				else if(searchItemNumber == colorBarCode){
                    inventory.filterColor(stock, stockSize, searchItemNumber);
				}
				else if(searchItemNumber == styleBarCode){
                    inventory.filterStyle(stock, stockSize, searchItemNumber);
				}
                break;
            }
            case 3:
                break;
            case 4:;
                break;
            case 5:
                cout<<"Goodbye!"<<endl;
                break;
            default:
                cout<<"Not a valid menu selection"<<endl;
                break;
        }
    }
	data.close();
    return 0;
}

