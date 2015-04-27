Fashion Class Functions:

Method:   printInventory
Prototype: void Fashion::printInventory(item *array, int)
Description: This function takes in the array and prints out each part of the struct in the array which is the name, the style, the color, and style.
Calling: call this method like this: 
Fashion inventory
inventory.printInventory(stock,stockSize)
Preconditions: the data must be read and put into the array for this function to print it
Postconditions: there is no change to the actual data or array, this function merely prints the data


Method:      searchName
Prototype: Fashion::searchName(item *array, int, int)
Description: This function takes in the array and what the name of item the user is searching for in the array
and traverses, finds, and prints out each part of the struct in the array (name, the style, the color, and style). So it searches the array by ".nameBarCode"
Calling: call this method like this: 
Fashion inventory
inventory.searchName(stock,stockSize,searchItem)
Preconditions: the data must be read and put into the array for this funtion to be able to traverse. This function also needs user input
Postconditions: there is no modification to the actual data or array, this function just prints the data*/
