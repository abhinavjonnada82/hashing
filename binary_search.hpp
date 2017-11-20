/* Dennis Pham
 * T353F647
 * November 18th 2017
 */
/* Class info
 * 
 * printArr
 * Input: Nothing
 * Output: Nothing
 * Desc: prints entire array.
 * 
 * initArr
 * Input: Nothing
 * Output: Nothing
 * Desc: initalizes entire array by adding 1 to the index number and multiplying by 5
 * 
 * returnElement
 * Input: index number
 * Output: integer number
 * Desc: returns an integer value of the data stored in the index.
 *       the index is known based on the parameter.
 * 
 * search
 * Input: integer value
 * Output: Bool value
 * Desc: returns true or false based on if the parameter has been found in the array
 *       function uses a binary search algorithm that loops for however often it is 
 *       needed until it is found.
 * 
 * int begin
 * Desc: used for binary search function to mark where the algorithm first searches
 *       begin can change based on results of the search for each iteration.
 * 
 * int middle
 * Desc: used for binary search function to mark where the mid point of the search
 *       function searches through array until the target value is equal to the variable.
 * 
 * int end
 * Desc: used for binary search function to mark where the search ends.
 *       end can change based on the results of the search for each iteration.
 * 
 * int searchArr
 * Desc: Size of the array, and where the data is stored.
 * 
 */
 
 
#ifndef BINARYSEARC_H
#define BINARYSEARC_H

class B_search
{
   int begin;
   int middle;
   int end;
   int searchArr[125];
   
   public:
   
   B_search();
   
   void printArr();
   //prints entire array.
   void initArr(int index, int input);
   //initalizes array by setting each piece of data as a multiple of 5 for each index.
   int returnElement(int index);
   //returns element of the index passed through as a parameter.
   bool search(int target);
   //searches for an index containing the parameter.
};

#endif
