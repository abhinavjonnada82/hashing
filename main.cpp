#include "binary_search.cpp"
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ctime>

using namespace std;

int main()
{
   int x;
   B_search bsearch;
  // int array[125];
   //initialize array to 126 elements.
   srand(time(NULL));
   //seed random generator based on time.
   ofstream xfiles;
   xfiles.open("results.txt");
   //open output file.
   if(xfiles.is_open())
      cout << "file is open\n";
      
   for(int i = 0; i < 10; i++)
   {
      x = ((i + 1) * rand())% 101;
      bsearch.initArr(i, x);
      cout << "element " << bsearch.returnElement(i) << endl;
   }
      

      
   xfiles.close();
   return 0;
}
