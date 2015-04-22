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

int main(int argc, char *argv[])
{
	int command;

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

    return 0;
}

