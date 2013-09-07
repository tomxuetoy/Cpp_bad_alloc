// bad_alloc example
#include <iostream>     // std::cout
#include <new>          // std::bad_alloc
 
int main () {
    int i;
 
    try
    {
      for(i=1;i<=1000000;i++)
          int* myarray= new int[10000000];
    }
    catch (std::bad_alloc& ba)
    {
      std::cerr << "bad_alloc caught: " << ba.what() << '\n';
    }
    return 0;
}
/* 
$ a.exe
bad_alloc caught: std::bad_alloc
 
 * */
