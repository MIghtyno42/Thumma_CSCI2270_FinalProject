Fashion Class Functions:

Method: Fashion (constructor)
Prototype: Fashion()
Description: This function creates an instance of the object class. It gives access to the other public methods that are in this .cpp file
Calling: Fashion inventory (where inventory is the instance name, can be called anything
Preconditions: The data should be read when this is called, but it can be called anytime in the main function
Postconditions: There is no change to the actual data or the array, this function just instantiates the class so that the other functions can be called through the instance.*/


Method: ~Fashion  (destructor)
Prototype: ~Fashion()
Description: This function is just the destructor
Calling: ~Fashion();
Preconditions: This is for when everything is done and the user's commands are all executed
Postconditions: Destructs the instance created by the constructor */


Method: printInventory
Prototype: void Fashion::printInventory(item *array, int)
Description: This function takes in the array and prints out each part of the struct in the array which is the name, the style, the color, and style.
Calling: call this method like this: 
Fashion inventory
inventory.printInventory(stock,stockSize)
Preconditions: the data must be read and put into the array for this function to print it
Postconditions: there is no change to the actual data or array, this function merely prints the data
Expected input: array
Expected output: print array data
Expected output example:

			Name: Box Pleated Gingham Skirt
			Type: skirt
			Color: white
			Style: classy


			Name: Floral Drop Waist Skirt
			Type: skirt
			Color: purple
			Style: retro


			Name: Abstract Striped Bodycon Skirt
			Type: skirt
			Color: black
			Style: classy


			Name: Strappy Mid Calf Gladiator Sandals
			Type: shoe
			Color: black
			Style: boho


Method: searchName
Prototype: Fashion::searchName(item *array, int, int)
Description: This function takes in the array and what the name of item the user is searching for in the array
and traverses, finds, and prints out each part of the struct in the array (name, the style, the color, and style). So it searches the array by ".nameBarCode"
Calling: call this method like this: 
Fashion inventory
inventory.searchName(stock,stockSize,searchItem)
Preconditions: the data must be read and put into the array for this funtion to be able to traverse. This function also needs user input
Postconditions: there is no modification to the actual data or array, this function just prints the data
Expected input: array, integer of size of array, and item we are searching for
Expected output: print array data for that item
Expected output example:

			Name: Strappy Mid Calf Gladiator Sandals
			Type: shoe
			Color: black
			Style: boho


method: filterType
Prototype: void Fashion::filterType(item *array, int, int)
Description: This function takes in the array and the user's input of type, it then makes a new array with all the elements which fit that type, then gives
user the option to filter by color or style which calls those functions (and makes another array with the items that have only the chosen criteria). The user
can also choose to just print their current selection (the array with all the chosen filters applied)
Calling: call this method like this:
Fashion inventory 
inventory.filterType(stock,stockSize, searchItemNumber)
Preconditions: the data must be read and put into the array for this funtion to extract values from it and put into another array. This function also needs
user input.
Postconditions: the original array will remain unchanged but this function creates a temporary array as well 
Expected input: array, integer of size of array, and type we are searching for
Expected output: print sub menu with option array data for options in submenu
Expected output example:

			Options for type: shirt, dress, skirt, pants, and shoe
			Your selection:
			[user input]
			
			What do you want to do?
			1. Add a color filter?
			2. Add a style filter?
			3. Print the filtered inventory?
			4. Go back?


method: filterStyle
Prototype: void Fashion::filterStyle(item *array, int, int)
Description: Similar to filterType. This function takes in the array and the user's input of style, it then makes a new array with all the elements which fit that
style, then gives user the option to filter by color or type which calls those functions (and makes another array with the items that have only the chosen criteria).
The user can also choose to just print their current selection (the new array with all the chosen filters applied)
Calling: call this method like this: 
Fashion inventory
inventory.filterStyle(stock,stockSize, searchItemNumber)
Preconditions: the data must be read and put into the array for this funtion to extract values from it and put into another array. This function also needs user input.
Postconditions: the original array will remain unchanged but this function creates a temporary array as well 
Expected input: array, integer of size of array, and style we are searching for
Expected output: print sub menu with option array data for options in submenu
Expected output example:

			Options for style: modern, boho, classy, basic, and retro
			Your selection:
			[user input]
			
			What do you want to do?
			1. Add a type filter?
			2. Add a color filter?
			3. Print the filtered inventory?
			4. Go back?


method: filterColor
Prototype: void Fashion::filterColor(item *array, int, int)
Description: Similar to filterStyle and filterType. This function takes in the array and the user's input of color, it then makes a new array with all the elements
which fit that color, then gives user the option to filter by style or type which calls those functions (and makes another array with the items that have only the
chosen criteria). The user can also choose to just print their current selection (the new array with all the chosen filters applied)
Calling: call this method like this: 
Fashion inventory
inventory.filterColor(stock,stockSize, searchItemNumber)
Preconditions: the data must be read and put into the array for this funtion to extract values from it and put into another array. This function also needs user input.
Postconditions: the original array will remain unchanged but this function creates a temporary array as well
Expected input: array, integer of size of array, and color we are searching for
Expected output: print sub menu with option array data for options in submenu
Expected output example:

			Options for color: black, white, blue, red, pink, purple, grey, orange, and yellow
			Your selection:
			[user input]
			
			What do you want to do?
			1. Add a type filter?
			2. Add a style filter?
			3. Print the filtered inventory?
			4. Go back?
			

method: setPrint
Prototype: void Fashion::setPrint(item *arr, int size)
Description: This function takes in the array and the size, and prints the items in that array. This is used
specifically for after filtering by type, style, or color occurs. It checks if there are still items that match
the filter criteria, and if there are, it prints all the items that match that filtered criteria.
Calling: call this method like this: in the sub-menu, setPrint(arr, size);
Preconditions: The array has to be filtered by type, color, or size already for this function to be called.
Postconditions: Only the filtered array that matches the criteria will print. 
Expected input: array, integer of size of array
Expected output: print data for the new array
Expected output example: 

			Name: Box Pleated Gingham Skirt
			Type: skirt
			Color: white
			Style: classy


			Name: Floral Drop Waist Skirt
			Type: skirt
			Color: purple
			Style: retro


method: barCode
Prototype: int Fashion::barCode(string)
Description: This function takes in a string, finds the number values for each letter, adds them up, then returns that sum to give us an interger value for a
certain string. This int is returned.
Calling: call this method like this: inventory.barCode(searchItem)
Preconditions: the only thing this function depends on is a string that the user provides
Postconditions: there is no change to the data but there is now a number value for the string
Expected input: string
Expected output: returns integer value, nothing print


method: quickSort
Prototype: array Fashion::quickSort(item* array, int, int)
Description: This function sorts the inventory in alphabetical order. It takes in the array, the first and the
last indices as arguments and sorts the string by using the sorting method quickSort.
Calling: call this method like this: 
Fashion inventory
inventory.quickSort(stock, left, right)
Preconditions: the data must be read and put into the array for this function to traverse through and sort it
Postconditions: the names of the items in the inventory are now in alphabetical order, and it will be returned in a new array that is created in the main function 
Expected input: array, int of left, int of right
Expected output: print data in a alphebetical manner
Expected output example:

Name -- Classic A Line Skirt
Name -- Classic Crease Front Trousers
Name -- Crochet Paneled Flounce Dress
Name -- Crochet Trimmed Woven Blouse
Name -- Cropped Halter Top
Name -- Embroidered Espadrilles
Name -- Floral Drop Waist Skirt


method: shoppingCart
Prototype: void Fashion::shoppingCart(item* array, int)
Description: This function has the user type in an item, finds the item, then makes its bool value to be true(thus putting it in a virtual "shopping cart".
Then it prints out all the values in the array that have the bool value as true
Calling: call this method like this: 
Fashion inventory
inventory.shoppingCart(stock, stockSize)
Preconditions: the data must be read and put into the array for this function to traverse through and sort it, this also requires user input data
Postconditions:  After this function is run, the bool values for some items in the array will change, thus the origional array will change, this function also 
prints the true bool array elements 
Expected input: array, int size of the array
Expected output: print sub menu and print results of submenu
Expected output example:

		What do you want to do?
		1. Add Item to Cart
		2. Print Shopping Cart
		3. Go back?
		"user input"
		Type item name to add to cart
		"user input"
		

		



