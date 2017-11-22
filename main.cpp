/* Dennis Pham
 * T353F647
 * November 20th 2017
 */
 
 /* Main file functions
  * 
  * hashing
  * input: data
  * output: nothing
  * Desc: initializes global array as an unordered hashed list based on
  *       linear probe(+3) algorithm.
  */
 
#include "linear_search.hpp"
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ctime>

using namespace std;

void hashing(int data);

int hashArr[125];
//hashed array is declared as a global function, so that hashing function is able to access it.

int main()
{
   bool getmeoutofhere = false;
   L_search lsearch;
   int array[100];
   //initialize array to 126 elements.
   srand(time(NULL));
   //seed random generator based on time.
   ofstream xfiles;
   xfiles.open("results.txt");
   //open output file.
   
   //initalizing test values as 0.
   int test = 0;
   int test1 = 0;
   int test2 = 0;
   int test3 = 0;
   int test4 = 0;

   if(xfiles.is_open())
      cout << "file is open\n";
   
   xfiles << "Numbers generated\n";
   for(int i = 0; i <= 100; i++)
   {
      array[i] = ((i + 1) * rand()%300) + 2300;
      //Numbers are restricted to values below 300 when randomly generated with 2300 added.
      xfiles << array[i] << endl;
   }
   
   for(int i = 0; i <= 125; i++)
   {
      hashArr[i] = 0;
      //initialize all numbers in the current array as 0.
   }
   
   for(int i = 0; i <= 100; i++)
   {
      hashing(array[i]);
   }
   
   
   xfiles << endl << endl << "Array\n";
   for(int i = 0; i <= 125; i++)
   {
      xfiles << i << " " << hashArr[i] << endl;
   }
   
   for(int i = 0; i <= 125; i++)
   //loop uses i as a variable to pass into the initArr function as an index and hashArr[i] as the data.
   {
      lsearch.initArr(i, hashArr[i]);
   }
   
   //the same equation used to generate the random numbers are used to generate test values.
   test = (rand()%300) + 2300;
   test1 = (rand()%300) + 2300;
   test2 = (rand()%300) + 2300;
   test3 = (rand()%300) + 2300;
   test4 = (rand()%300) + 2300;

   cout << "searching for " << test << endl;
      do
      //the loop is incremented at least once.
      {
         if(lsearch.search(test) == true)
         //if the element is found then it is recoreded into the file and then the loop is incremented again.
         {
            xfiles << test << " was found at index " << lsearch.returnIndex() << endl;
         }
         else
         {
            xfiles << test << " could not be found\n";
            getmeoutofhere = true;
            //if the element is not found in any of the loops then the boolean value is set to true to exit the loop.
         }
         
      }while(getmeoutofhere == false);
      
      getmeoutofhere = false;
      //boolean value is reset to false for next test value.

   cout << "searching for " << test1 << endl;
      do
      {
         if(lsearch.search(test1) == true)
         {
            xfiles << test1 << " was found at index " << lsearch.returnIndex() << endl;
         }
         else
         {
            xfiles << test1 << " could not be found\n";
            getmeoutofhere = true;
         }
         
      }while(getmeoutofhere == false);

      getmeoutofhere = false;      
      
   cout << "searching for " << test2 << endl;      
      do
      {
         if(lsearch.search(test2) == true)
         {
            xfiles << test2 << " was found at index " << lsearch.returnIndex() << endl;
         }
         else
         {
            xfiles << test2 << " could not be found\n";
            getmeoutofhere = true;
         }
         
      }while(getmeoutofhere == false);      
      
      getmeoutofhere = false;
   
   
   cout << "searching for " << test3 << endl;
      do
      {
         if(lsearch.search(test3) == true)
         {
            xfiles << test3 << " was found at index " << lsearch.returnIndex() << endl;
         }
         else
         {
            xfiles << test3 << " could not be found\n";
            getmeoutofhere = true;
         }
         
      }while(getmeoutofhere == false);

      getmeoutofhere = false;


   cout << "searching for " << test4 << endl;
      do
      {
         if(lsearch.search(test4) == true)
         {
            xfiles << test4 << " was found at index " << lsearch.returnIndex() << endl;
         }
         else
         {
            xfiles << test4 << " could not be found\n";
            getmeoutofhere = true;
         }
         
      }while(getmeoutofhere == false);
      
   
   xfiles.close();
   return 0;
}

void hashing(int data)
{
   int hash;
   hash = data%101;
   //determines the index number for the data.
   bool getmeoutofhere = false;
   //makeshift break statement.
   while(getmeoutofhere != true)
   {
      if(hashArr[hash] == 0)
      {
         hashArr[hash] = data;
         getmeoutofhere = true;
         //when the data has been stored set the boolean value to true to exit the loop.
      }
      else
      {
         hash += 3;
         if(hash > 124)
         {
            hash = hash%125;
            //if the value for the next index is larger than 124 then the value is reset to 0.
         }
         getmeoutofhere = false;
         //if the data is unable to be stored in an index, increment the hash by 3 and reiterate loop.
      }   
   }
   return;
}
