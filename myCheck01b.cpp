/***********************************************************************
* Program:
*    Checkpoint 01b, Review  
*    Brother Burton, CS165
* Author:
*    Derek Anderson
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Function: getSize
 * Purpose: Prompts user for size of list.
 ***********************************************************************/
int getSize()
{
   int sizeOfList;
   
   cout << "Enter the size of the list: ";
   cin >> sizeOfList;
   
   return sizeOfList;
}

/**********************************************************************
 * Function: getList
 * Purpose: Prompts user for list of numbers and store them in the passed
 * array.
 ***********************************************************************/
void getList(int list[], int sizeOfList)
{   
   for (int i = 0; i < sizeOfList; i++)
   {
      cout << "Enter number for index " << i << ": ";
      cin >> list[i];
   }
   
   return ;
}

/**********************************************************************
 * Function: displayMultiples
 * Purpose: Loops through each element in the array and display if it is
 * divisible by 3.
 ***********************************************************************/
void displayMultiples(int list[], int sizeOfList)
{
   cout << endl;
   cout << "The following are divisible by 3:\n";
   for (int i = 0; i < sizeOfList; i++)
   {
      if (list[i] % 3 == 0)
      {
         cout << list[i] << endl;
      }
   }
}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   int sizeOfList = getSize();
   int list[sizeOfList];
   getList(list, sizeOfList);
   displayMultiples(list, sizeOfList);
   
   return 0;
}
