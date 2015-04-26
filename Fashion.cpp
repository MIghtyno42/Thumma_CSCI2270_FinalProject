//Deekshitha Thumma and Christine Samson
//Hoenigman 2270 - Data Structures
//Final Project
//Santhanaraman Ganesh

#include <iostream>
#include <string>
#include "Fashion.h"
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <string.h>

using namespace std;

//constructor
Fashion::Fashion(){

}

//destructor
Fashion::~Fashion(){

}

//printing the inventory
void Fashion::printInventory(item *foundItems, int sizeStock)
{
	for(int i = 0; i < sizeStock; i++){
		cout<<"Name: "<<foundItems[i].name<<endl;
		cout<<"Type: "<<foundItems[i].type<<endl;
		cout<<"Color: "<<foundItems[i].color<<endl;
		cout<<"Style: "<<foundItems[i].style<<endl;
		cout<< "\n" << endl;
	}
}

//searching for a specific item name
void Fashion::searchName(item *searchItems, int sizeStock, int searchName){
    bool foundName = false;
	for(int i = 0; i < sizeStock; i++){
		if(searchItems[i].nameBarCode == searchName){
            foundName = true;
			cout<<"Name: "<<searchItems[i].name<<endl;
            cout<<"Type: "<<searchItems[i].type<<endl;
            cout<<"Color: "<<searchItems[i].color<<endl;
            cout<<"Style: "<<searchItems[i].style<<endl;
            cout<< "\n" << endl;
		}
	}
	if(foundName == false){
        cout<<"No such item"<<endl;
	}
}

//searching for an item color
void Fashion::searchColor(item *searchItems, int sizeStock, int searchColor){
    for(int i = 0; i < sizeStock; i++){
        if(searchItems[i].colorBarCode == searchColor){
            cout<<"Name:"<<searchItems[i].name<<endl;
			cout<<"Type:" <<searchItems[i].type<<endl;
			cout<<"Color:" <<searchItems[i].color<<endl;
			cout<<"Style:" <<searchItems[i].style<<endl;
        }
    }
}

//searching for an item type
void Fashion::searchType(item *searchItems, int sizeStock, int searchType){
    for(int i = 0; i < sizeStock; i++){
        if(searchItems[i].typeBarCode == searchType){
            cout<<"Name:"<<searchItems[i].name<<endl;
			cout<<"Type:" <<searchItems[i].type<<endl;
			cout<<"Color:" <<searchItems[i].color<<endl;
			cout<<"Style:" <<searchItems[i].style<<endl;
        }
    }
}

//searching for an item style
void Fashion::searchStyle(item *searchItems, int sizeStock, int searchStyle){
    for(int i = 0; i < sizeStock; i++){
        if(searchItems[i].styleBarCode == searchStyle){
            cout<<"Name:"<<searchItems[i].name<<endl;
			cout<<"Type:" <<searchItems[i].type<<endl;
			cout<<"Color:" <<searchItems[i].color<<endl;
			cout<<"Style:" <<searchItems[i].style<<endl;
        }
    }
}

//filtering the inventory by type
void Fashion::filterType(item *searchItems, int sizeStock, int filterType){
	typeDone = true;
	int counter = 0;
	for(int i = 0; i < sizeStock; i++){
		if(searchItems[i].typeBarCode == filterType){
			counter++;
		}
	}
	item *afterType = new item[counter+1];
    int s = 0;
    bool foundType = false;
	for(int i = 0; i < sizeStock; i++){
		if(searchItems[i].typeBarCode == filterType){
		    foundType = true;
			afterType[s].name = searchItems[i].name;
			afterType[s].nameBarCode = searchItems[i].nameBarCode;
			afterType[s].type = searchItems[i].type;
			afterType[s].typeBarCode = searchItems[i].typeBarCode;
			afterType[s].color = searchItems[i].color;
			afterType[s].colorBarCode = searchItems[i].colorBarCode;
			afterType[s].style = searchItems[i].style;
			afterType[s].styleBarCode = searchItems[i].styleBarCode;
			s++;
		}
	}
	if(foundType == false){
        cout<<"No such type"<<endl;
	}
	else{
        int input;
        while(input != 4){
            cout<<"What do you want to do?"<<endl;
            cout<<"1. Add a color filter?"<<endl;
            cout<<"2. Add a style filter?"<<endl;
            cout<<"3. Print the filtered inventory?"<<endl;
            cout<<"4. Go back?"<<endl;
            cin >> input;
            cin.ignore(10000,'\n');
            string searchItem;
            int searchItemNumber;
            switch(input){
            case 1:
            {
                if(colorDone == false){
                    cout << "Options for color: black, white, blue, red, pink, purple, grey, orange, and yellow" << endl;
                    cout << "Your selection:" << endl;
                    getline(cin, searchItem);
                    searchItemNumber = barCode(searchItem);
                    filterColor(afterType, s, searchItemNumber);
                    colorDone = true;
                    break;
                }
                else{
                    cout << "You already have filtered by color" << endl;
                    break;
                }
            }
            case 2:
            {
                if(styleDone == false){
                    cout << "Options for style: modern, boho, classy, basic, and retro" << endl;
                    cout << "Your selection:" << endl;
                    getline(cin, searchItem);
                    searchItemNumber = barCode(searchItem);
                    filterStyle(afterType, s, searchItemNumber);
                    styleDone = true;
                    break;
                }
                else{
                    cout << "You already have filtered by style" << endl;
                    break;
                }
            }
            case 3:
                setPrint(afterType, s);
                break;
            case 4:
                cout<<"Goodbye!"<<endl;
                break;
                return;
            default:
                cout<<"Not a valid menu selection"<<endl;
                break;
            }
        }
	}
}

//filtering the inventory by style
void Fashion::filterStyle(item *searchItems, int sizeStock, int filterStyle){
    styleDone = true;
	int counter = 0;
	for(int i = 0; i < sizeStock; i++){
		if(searchItems[i].styleBarCode == filterStyle){
			counter++;
		}
	}
	item *afterStyle = new item[counter+1];
    int s = 0;
    bool foundStyle = false;
	for(int i = 0; i < sizeStock; i++){
		if(searchItems[i].styleBarCode == filterStyle){
            foundStyle = true;
			afterStyle[s].name = searchItems[i].name;
			afterStyle[s].nameBarCode = searchItems[i].nameBarCode;
			afterStyle[s].type = searchItems[i].type;
			afterStyle[s].typeBarCode = searchItems[i].typeBarCode;
			afterStyle[s].color = searchItems[i].color;
			afterStyle[s].colorBarCode = searchItems[i].colorBarCode;
			afterStyle[s].style = searchItems[i].style;
			afterStyle[s].styleBarCode = searchItems[i].styleBarCode;
			s++;
		}
	}
	if(foundStyle == false){
        cout<<"No such style"<<endl;
	}
	else{
        int input;
        while(input != 4){
            cout<<"What do you want to do?"<<endl;
            cout<<"1. Add a type filter?"<<endl;
            cout<<"2. Add a color filter?"<<endl;
            cout<<"3. Print the filtered inventory?"<<endl;
            cout<<"4. Go back?"<<endl;

            cin >> input;
            cin.ignore(10000,'\n');
            string searchItem;
            int searchItemNumber;
            switch(input){
            case 1:
            {
                if(typeDone == false){
                    cout << "Options for type: shirt, dress, skirt, pants, and shoe" << endl;
                    cout << "Your selection:" << endl;
                    getline(cin, searchItem);
                    searchItemNumber = barCode(searchItem);
                    filterType(afterStyle, s, searchItemNumber);
                    typeDone = true;
                    break;
                }
                else{
                    cout << "You already have filtered by type" << endl;
                    break;
                }
            }
            case 2:
            {
                if (colorDone == false){
                    cout << "Options for color: black, white, blue, red, pink, purple, grey, orange, and yellow" << endl;
                    cout << "Your selection:" << endl;
                    getline(cin, searchItem);
                    searchItemNumber = barCode(searchItem);
                    filterColor(afterStyle, s, searchItemNumber);
                    colorDone = true;
                    break;
                }
                else{
                    cout << "You already have filtered by color" << endl;
                    break;
                }
            }
            case 3:
                setPrint(afterStyle, s);
                return;
                break;
            case 4:
                cout<<"Goodbye!"<<endl;
                break;
            default:
                cout<<"Not a valid menu selection"<<endl;
                break;
            }
        }
	}
}

//filtering the inventory by color
void Fashion::filterColor(item *searchItems, int sizeStock, int filterColor){
    colorDone = true;
	int counter = 0;
	for(int i = 0; i < sizeStock; i++){
		if(searchItems[i].colorBarCode == filterColor){
			counter++;
		}
	}
	item *afterColor = new item[counter+1];
    int s = 0;
    bool foundColor = false;
	for(int i = 0; i < sizeStock; i++){
		if(searchItems[i].colorBarCode == filterColor){
            foundColor = true;
			afterColor[s].name = searchItems[i].name;
			afterColor[s].nameBarCode = searchItems[i].nameBarCode;
			afterColor[s].type = searchItems[i].type;
			afterColor[s].typeBarCode = searchItems[i].typeBarCode;
			afterColor[s].color = searchItems[i].color;
			afterColor[s].colorBarCode = searchItems[i].colorBarCode;
			afterColor[s].style = searchItems[i].style;
			afterColor[s].styleBarCode = searchItems[i].styleBarCode;
			s++;
		}
	}
	if(foundColor == false){
        cout<<"No such color"<<endl;
	}
	else{
        int input;
        while(input != 4){
            cout<<"What do you want to do?"<<endl;
            cout<<"1. Add a type filter?"<<endl;
            cout<<"2. Add a style filter?"<<endl;
            cout<<"3. Print the filtered inventory?"<<endl;
            cout<<"4. Go back?"<<endl;

            cin >> input;
            cin.ignore(10000,'\n');
            string searchItem;
            int searchItemNumber;
            switch(input){
            case 1:
            {
                if(typeDone == false){
                    cout << "Options for type: shirt, dress, skirt, pants, and shoe" << endl;
                    cout << "Your selection:" << endl;
                    getline(cin, searchItem);
                    searchItemNumber = barCode(searchItem);
                    filterType(afterColor, s, searchItemNumber);
                    typeDone = true;
                break;
                }
                else{
                    cout << "You already have filtered by type" << endl;
                    break;
                }
            }
            case 2:
            {
                if(styleDone == false){
                    cout << "Options for style: modern, boho, classy, basic, and retro" << endl;
                    cout << "Your selection:" << endl;
                    getline(cin, searchItem);
                    searchItemNumber = barCode(searchItem);
                    filterStyle(afterColor, s, searchItemNumber);
                    styleDone = true;
                    break;
                }
                else{
                    cout << "You already have filtered by style" << endl;
                    break;
                }
            }
            case 3:
                setPrint(afterColor, s);
                break;
            case 4:
                cout<<"Goodbye!"<<endl;
                break;
            default:
                cout<<"Not a valid menu selection"<<endl;
                break;
            }
        }
	}
}

//after filters have been established, prints out the list of items that fit the filter criteria
void Fashion::setPrint(item *filterItems, int filterItemsSize){
    if(filterItemsSize == 0){
        cout<<"There are no items that match the criteria"<<endl;
    }
    else{
        for(int i = 0; i < filterItemsSize; i++){
            cout<<"Name: "<<filterItems[i].name<<endl;
            cout<<"Type: "<<filterItems[i].type<<endl;
            cout<<"Color: "<<filterItems[i].color<<endl;
            cout<<"Style: "<<filterItems[i].style<<endl;
            cout<< "\n" << endl;
        }
    }
}

//converting the items to their bar codes
int Fashion::barCode(string word){
    int sum = 0;
    for(int i = 0 ; i < word.length(); i++){
        sum = sum + word[i];
    }
    return sum;
}

//sorting the inventory by alphabetical order
item *Fashion::quickSort(item *arr, int left, int right){
     int i = left;
     int j = right;
     string tmp;
     string pivot = arr[(left + right) / 2].name;
     while(i <= j){
          while(((arr[i].name.compare(pivot)) < 0) && (i < right))
               i++;
          while(((arr[j].name.compare(pivot)) > 0) && (j > left))
               j--;
          if(i <= j){
               tmp = arr[i].name;
               arr[i].name = arr[j].name;
               arr[j].name = tmp;
               i++;
               j--;
          }
     }
     if (left < j){
          quickSort(arr, left, j);
     }
     if (i < right){
          quickSort(arr, i, right);
     }
     return arr;

}
