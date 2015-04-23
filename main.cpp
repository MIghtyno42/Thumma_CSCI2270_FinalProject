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
<<<<<<< HEAD

        if (counter % 4 == 1) // if first item in line
        {
            sname = token;
            name = numbervalue(token);
=======
        if (counter % 4 == 1) // if first item in line
        {
            name = token;
            nameBarCode = barCode(token);
            //cout << name << endl;
>>>>>>> 5def0be8c21af674a599bcb12f096738dac17ac9
        }

        if (counter % 4 == 2) // if second item in line
        {
<<<<<<< HEAD
			stype = token;
            type = numbervalue(token);
=======
			type = token;
            typeBarCode = barCode(token);
>>>>>>> 5def0be8c21af674a599bcb12f096738dac17ac9

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
<<<<<<< HEAD
			//arr[i].number = number;
			//cout << arr[i].number << endl;
			arr[i].name = name;
			cout << arr[i].name << endl;
			arr[i].sname = sname;
			arr[i].type = type;
			cout << arr[i].type << endl;
			arr[i].stype = stype;
			arr[i].color = color;
			cout << arr[i].color << endl;
			arr[i].scolor = scolor;
			arr[i].style = style;
			cout << arr[i].style << endl;
			arr[i].sstyle = sstyle;
=======
			stock[i].nameBarCode = nameBarCode;
			cout << stock[i].nameBarCode << endl;
			stock[i].typeBarCode = typeBarCode;
			cout << stock[i].typeBarCode << endl;
			stock[i].colorBarCode = colorBarCode;
			cout << stock[i].colorBarCode << endl;
			stock[i].styleBarCode = styleBarCode;
			cout << stock[i].styleBarCode << endl;
>>>>>>> 5def0be8c21af674a599bcb12f096738dac17ac9
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
				inventory.printInventory();
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

