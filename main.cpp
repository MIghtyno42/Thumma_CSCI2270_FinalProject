//Deekshitha Thumma and Christine Samson
//Hoenigman 2270 - Data Structures
//Final Project
//Santhanaraman Ganesh

#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include "Fashion.h"

using namespace std;

//calculating the bar code for each of the items
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
    //reading in the file as an argument
    data.open(argv[1]);
    int i = 0;
    int stockSize = 30;
    int nameBarCode;
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
            //putting the items in the array called stock
            stock[i].name = name;
            stock[i].nameBarCode = nameBarCode;
            stock[i].type = type;
            stock[i].typeBarCode = typeBarCode;
            stock[i].color = color;
            stock[i].colorBarCode = colorBarCode;
            stock[i].style = style;
            stock[i].styleBarCode = styleBarCode;
            //incrementing in the array
            i++;
        }
    }
    //the user's input
	int command;
	//creating an instance of fashion inventory
	Fashion inventory;

    string searchItem;
    int searchItemNumber;
    int start = 0;
    item *new_arr = new item [stockSize];

    while(command != 8){
        cout<<"======Main Menu======"<<endl;
        cout<<"1. Print the inventory "<<endl;
        cout<<"2. Start Search by Name"<<endl;
        cout<<"3. Start Search by Type "<<endl;
        cout<<"4. Start Search by Color"<<endl;
        cout<<"5. Start Search by Style"<<endl;
        cout<<"6. Sort Inventory Alphabetically"<<endl;
        cout<<"7. Add Item to Shopping Cart" << endl;
        cout<<"8. Quit "<<endl;

        cin >> command;
        cin.ignore(10000,'\n');

        switch(command){

            case 1:
                //printing the inventory
				inventory.printInventory(stock, stockSize);
                break;
            case 2:
            {
                //searching by item name
				cout << "Please type in an item name:" << endl;
				getline(cin, searchItem);
				searchItemNumber = barCode(searchItem);
				cout<<"Searching name '" << searchItem << "'......." <<endl;
                inventory.searchName(stock, stockSize, searchItemNumber);
                break;
            }
            case 3:
            {
                //searching by type
				cout << "Options for type: shirt, dress, skirt, pants, and shoe" << endl;
				cout << "Your selection:" << endl;
				getline(cin, searchItem);
				searchItemNumber = barCode(searchItem);
				cout<<"Searching type '" << searchItem << "'......." <<endl;
				inventory.filterType(stock, stockSize, searchItemNumber);
                break;
			}
            case 4:
            {
                //searching by color
				cout<<"Options for color: black, white, blue, red, pink, purple, grey, orange, and yellow"<<endl;
				cout<<"Your selection:"<<endl;
				getline(cin, searchItem);
				searchItemNumber = barCode(searchItem);
				cout<<"Searching color '"<<searchItem <<"'......."<<endl;
				inventory.filterColor(stock, stockSize, searchItemNumber);
                break;
			}
            case 5:
            {
                //searching by style
				cout<<"Options for style: modern, boho, classy, basic, and retro"<<endl;
				cout<<"Your selection:"<<endl;
				getline(cin, searchItem);
				searchItemNumber = barCode(searchItem);
				cout<<"Searching style '"<<searchItem<<"'......."<<endl;
				inventory.filterStyle(stock, stockSize, searchItemNumber);
                break;
              }
            case 6:
            {
                //sorting the inventory by alphabetical order
                start = 0;
                new_arr = inventory.quickSort(stock, start, (stockSize-1));
                for(int i = 0; i < stockSize; i++){
                    cout<<"Name -- "<<new_arr[i].name<<endl;
                }
                break;
            }
            case 7:
            {
				//string shoppingItem;
				//cout << "Type item name to add to cart" << endl;
				//getline(cin, shoppingItem);
				//int shoppingBarcode = barCode(shoppingItem);
                //adding item to virtual shopping cart
                //inventory.shoppingCart(stock, stockSize, shoppingBarcode);
                inventory.shoppingCart(stock, stockSize);
                break;
            }
            case 8:
                //quitting the program
                cout<<"Goodbye!"<<endl;
                break;
            default:
                //if the user input's an invalid menu selection
                cout<<"Not a valid menu selection"<<endl;
                break;
        }
    }
	data.close();
    return 0;
}

