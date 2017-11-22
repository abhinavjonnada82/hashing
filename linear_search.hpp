/* Dennis Pham
 * T353F647
 * November 20th 2017
 */
 
/* Class info
 * 
 * L_search
 * input: Nothing
 * output: Nothing
 * Desc: initializes index for search function to 0.
 * 
 * initArr
 * input: index, data
 * output: Nothing
 * Desc: initializes each index in search array with the data associated with it from
 *       the global array in main file.
 * 
 * returnElement
 * input: index
 * output: array data
 * Desc: returns the data associated with the index passed as a parameter.
 * 
 * returnIndex
 * input: nothing
 * output: index
 * Desc: returns the index of where a target data was found.
 * 
 * search
 * input: target data
 * output: boolean value
 * Desc: searches array linearly until data is found, the data is changed to 0 so that
 *       when the function is called again the same data with the same index will not be
 *       returned multiple times.
 */ 
#ifndef LINEARSEARC_H
#define LINEARSEARC_H

class L_search
{
   int index;
   int searchArr[125];
   
   public:
   
   L_search();
   
   void initArr(int index, int data);
   int returnElement(int index);
   int returnIndex();
   bool search(int target);


};

#endif
