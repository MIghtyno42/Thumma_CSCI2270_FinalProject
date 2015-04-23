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

    int counter = 0;
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

    item *stock = new item[stockSize];

    while (getline(data, token, ',')){
        counter++;
        if (counter % 4 == 1) // if first item in line
        {
            name = token;
            nameBarCode = barCode(token);
            //cout << name << endl;
        }

        if (counter % 4 == 2) // if second item in line
        {
			type = token;
            typeBarCode = barCode(token);

        }
        if (counter % 4 == 3) // if third item in line
        {
			//color = numbervalue(convert(token));
			color = token;
			colorBarCode = barCode(token);
		}

        if (counter % 4 == 0) // if fourth item in line
        {
			//style = numbervalue(convert(token));
			style = token;
			styleBarCode = barCode(token);

			cout << i << "------------" << endl;
			stock[i].nameBarCode = nameBarCode;
			cout << stock[i].nameBarCode << endl;
			stock[i].typeBarCode = typeBarCode;
			cout << stock[i].typeBarCode << endl;
			stock[i].colorBarCode = colorBarCode;
			cout << stock[i].colorBarCode << endl;
			stock[i].styleBarCode = styleBarCode;
			cout << stock[i].styleBarCode << endl;
			i++;
			counter++;
		}
	}

	int command;
	Fashion inventory = new Fashion(stockSize);

    while(command != 5)
    {
        cout<<"======Main Menu======"<<endl;
        cout<<"1. "<<endl;
        cout<<"2. "<<endl;
        cout<<"3. "<<endl;
        cout<<"4. "<<endl;
        cout<<"5. "<<endl;

        cin >> command;
        cin.ignore(10000,'\n');

        switch(command){

            case 1:
				inventory.printInventory(stock);
                break;
            case 2:
                break;
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

