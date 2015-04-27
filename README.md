# Thumma_CSCI2270_FinalProject
CSCI2270 Final Project

Project Summary:
This program works as an inventory for fashion companies and retail stores. What this program does is keep an inventory of the stock of clothes that a certain store has; then, the customer can search for specific attributes of a certain item of clothing they are looking for. The program will then search through the inventory to see if we have any matching items. If there are no matching items, the program will bring up similar items as suggestions.  The inventory for the store will be built using a tree structure and will have linked lists integrated into it. The different search filters that our program will be able to do are: type (examples: shirt, dress, pants), color (examples: red, blue, black), style (examples: retro, boho, modern), designers (examples: Guess, Gucci, Pink), and length (examples: short, long, medium).  The program will have the assumption hat all sizes and price ranges are accounted for. 
How to Run:

Dependencies:
String library


System Requirements:
This program can be run on Windows, Mac, and Linux operating systems. 

Group Members:
Christine Samson
Deekshitha Thumma

Contributors:

Open issues/bugs:
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


