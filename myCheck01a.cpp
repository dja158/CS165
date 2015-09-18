/***********************************************************************
* Program:
*    Checkpoint 01a, Review  
*    Brother Burton, CS165
* Author:
*    Derek Anderson
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Function: displayWorld
 * Purpose: This will display the text "Hello CS 165 World!".
 ***********************************************************************/
void displayWorld()
{
   cout << "Hello CS 165 World!\n";

   return;
}

/**********************************************************************
 * Function: getName
 * Purpose: User will enter their first name in the program.
 ***********************************************************************/
void getName(char name[])
{
   cout << "Please enter your first name: ";
   cin.getline(name, 256);

   return;
}

/**********************************************************************
 * Function: getAge
 * Purpose: User will enter age in the program.
 ***********************************************************************/
int getAge()
{
   int age;
   cout << "Please enter your age: ";
   cin >> age;

   return age;
}

/**********************************************************************
 * Function: displayInfo
 * Purpose: Displays the name and age of user.
 ***********************************************************************/
void displayInfo(char name[], int age)
{
   cout << endl;
   cout << "Hello " << name << ", you are " << age << " years old.\n";

   return;
}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   char name[256];
   
   
   displayWorld();
   getName(name);
   int age = getAge();
   displayInfo(name, age);
   
   return 0;
}
