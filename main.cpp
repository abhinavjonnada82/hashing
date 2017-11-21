#include "binary_search.cpp"
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ctime>

using namespace std;

bool hashing(int data);
int hashArr[125];


int main()
{
   B_search bsearch;
   int array[100];
   //initialize array to 126 elements.
   srand(time(NULL));
   //seed random generator based on time.
   ofstream xfiles;
   xfiles.open("results.txt");
   //open output file.
   if(xfiles.is_open())
      cout << "file is open\n";
      
   for(int i = 0; i <= 100; i++)
   {
      array[i] = ((i + 1) * rand()%300) + 2300;
      cout << "element " << array[i] << endl;
   }
   
   for(int i = 0; i <= 100; i++)
   {
      hashing(array[i]);
   }
   
   for(int i = 0; i <= 125; i++)
   {
      cout << "hashed arr " << hashArr[i] << endl;
   }
   
   xfiles.close();
   return 0;
}

bool hashing(int data)
{
   int hash;
   hash = data%101;
   bool letmeoutofhere;
   while(letmeoutofhere == false)
   {
      if(hashArr[hash] != 0)
      {
         hashArr[hash] = data;
         letmeoutofhere = true;
      }
      else
      {
         hashArr[hash += 3] = data;
         letmeoutofhere = false;
      }   
   }
   return true;
}
