# Thumma_CSCI2270_FinalProject
CSCI2270 Final Project

PROJECT SUMMARY:

This program works as an inventory for retail stores and fashion companies to display their design collection. Fashion companies and designers (Gucci, 
Ralph Lauren, Pink, Guess etc.) can work with department stores like Macy's and Dillard's and use this program in order to build an inventory for their 
designs and available clothing. The user will enter the piece that they desire; then, the program will then search through the inventory to see if it has any
matching items. The inventory will be built of arrays that can filter by color (examples: red, blue, black), style (examples: retro, boho, modern), and type 
(examples: shirt, dress, pants) or search by name. For example, one can search for a type of clothing - a dress, and then filter by category all of the 
different choices from there. The user can choose the color, length, style and tailor the piece of clothing to what they want. If an exact match cannot be 
found, then the program will return a myriad of designs that are similar to the one they were looking for. This program assumes that all sizes are present 
and that the range of prices are already accounted for. Also, the user can add items to a virtual cart as they please to keep track of which itmes they want
 
HOW TO RUN:

MUST HAVE THESE FILES IN SAME FOLDER: Fashion.h, Fashion.cpp, main.cpp, Inventory.txt
To run the program you must type "g++ -std=c++11 main.cpp Fashion.cpp" and then enter.
Then type "./a.out Inventory.txt" (Inventory.txt is the command line)
The program will come up with a menu that lists these options: print the inventory, search by name, filter by type, filter by color, filter by style, sort the inventory in alphabetical order, add item to shopping cart, and quit the program. Once you pick an option follow the on screen instructions. To see specific names of items you can select "print inventory" or look on the Inventory.txt file. For example: after you start the program and see the main menu, you type "4" to search by color then type "black". Then press "3" to print all items that are red.
[Documentation] (Documentation.md)


DEPENDENCIES:

string library (string),
string.h,
iostream,
fstream,
g++ 11 (c++ 11 library),
inventory file,
stdio.h,
stdlib.h,
cmath

SYSTEM REQUIREMENTS:

This program can be run on Windows, Mac, and Linux operating systems. 

GROUP MEMBERS:

Christine Samson
Deekshitha Thumma

CONTRIBUTORS:

N/A

OPEN ISSUES/BUGS:

1.) Need a faster way to exit each of the sub-menus and return to the main program. What the program is doing now: it enters the main menu, and then a 
    sub-menu, and then another sub-menu. To exit, the user needs to say go back on each of the sub-menus in order to return to the main menu. Example: Main Menu -> filter by type sub-
    menu -> filter by color sub-menu -> filter by style sub-menu and then to return to the main menu in order to exit the program, the user needs to click 
    three times the "go back" option in order to return to the menu and exit the program
    
2.) Refer to number 1 - need a faster way to exit the whole program, not just the sub-menus.

3.) While the filtering function does work, there are some cases wherein the inventory does not have a or a multitude of the item "purple dress" for example
    and instead of going to the setPrint function to say that there's nothing to match this criteria, it states that the color purple or the type dress 
    doesn't exist. What it should do is recognize that the color purple and the type dress do separately exist -> go to the setPrint function -> check that
    new filtered array -> then state that no items match the criteria. It does do this correctly, but sometimes, it doesn't work out the way that one wants
    it to.
    
4.) A better way to check if one has filtered by some criteria already and reset if the user goes back to the main menu. Scenario: the user clicks the option 
    to filter by type, and then goes to the type sub-menu, and then goes to the color sub-menu. Then they choose the go back option to return to the main menu
    in order to restart the filter and chooses to filter by color or style first. But it says that they have already filtered by this color because of the 
    previous option. However, if we check and reset the filtering, it keeps resetting and even though they are still in the sub-menu, it lets them filter when 
    it shouldn't. 
    
5.) Enhancement: How to return items that are similar to the one the user was looking for, if an item cannot be found in the inventory.


