#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>

class Queue
{
  // the maximun queue size which cannaont be changed
 private :
   unsigned int size {};
  
 public :
 
  std::vector<double> members ;
  
  //constructors
  Queue(std::string name);
  Queue();

  // functions
   void displayQueue();
   void enQueue(double);
   double deQueue();
};

