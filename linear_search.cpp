/* Dennis Pham
 * T353F647
 * November 20th 2017
 */

#include "linear_search.hpp"
#include <iostream>

using namespace std;


L_search::L_search()
{
   index = 0;
}

void L_search::initArr(int index, int data)
{
   searchArr[index] = data;
   return;
}

int L_search::returnElement(int index)
{
   return searchArr[index];
}

int L_search::returnIndex()
{
   return index;
}

bool L_search::search(int target)
{
   for(int i = 0; i <= 125; i++)
   {
      if(searchArr[i] == target)
      {
         cout << target << " found at " << i << endl;
         index = i;
         searchArr[i] = 0;
         return true;
      }
   }
   return false;
}
