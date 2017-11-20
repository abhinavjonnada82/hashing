/* Dennis Pham
 * T353F647
 * November 18th 2017
 */


#include "binary_search.hpp"
#include <iostream> //used for debugging functions.
using namespace std;


B_search::B_search()
{
   begin = 0;
   middle = 0;
   end = 0;
   return;
}

void B_search::printArr()
{
   for(int i = 0; i <= 125; i ++)
   {
      cout << "array " << searchArr[i] << endl;
   }
   return; 
}

void B_search::initArr(int index, int input)
{
   searchArr[index] = input;
}

int B_search::returnElement(int index)
{
   return searchArr[index];
}

bool B_search::search(int target)
{
   begin = 0;
   end = 125;
 
   while(searchArr[begin] < searchArr[end])
   {
      middle = (begin + end) /2;
      //starts the search function by searching the first half of the array.
      if(target > searchArr[middle])
      {
            begin = middle;
            //if the target is not in the first half of the array, start the array at the middle.
            cout << "checking indexes: " << begin << " to " << end << endl;
      }
      else if(target < searchArr[middle])
      {
         end = middle;
         //if the target is in the first half of the array, end the array at the middle.
         cout << "checking indexes: " << begin << " to " << end << endl;
      }
      else
      //target == searchArr[middle]
      {
         cout << "data found at " << middle << " index\n";
         break;
      }
   }
   if(target == searchArr[middle])
   {
      cout << "target found " << searchArr[middle] << endl;
      return true;
   }
   else
   {
      cout << "data does not exist in index\n";
      return false;
   }
}

