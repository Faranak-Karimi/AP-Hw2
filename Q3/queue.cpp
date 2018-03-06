#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
#include "queue.h"

Queue::Queue (std::string name)
  {
    std::ifstream myf { name };
    if(!myf)
      std::cout<<"file not found .... "<<std::endl;
    // reading elements of array from txt file
    else
      {
    myf>>size;
   
     do
         {
	double temp{};
	char t {};
	myf>>temp;
	myf>>t;
	members.push_back(temp);
	if(members.size()==size)
	  break;
	 } while(!myf.eof());
     
        members.pop_back();
    
      }
 std::cout<<"constructor called"<<std::endl;
  }


// show the elements of Queue

void Queue::displayQueue()
{
  for(size_t i{} ; i <  members.size(); i++ )
    std::cout<<" "<<members.at(i)<<"  ";
  std::cout<<std::endl;
}

//inserting an element to the Queue

void Queue::enQueue(double input)
{
  if(members.size() < size )
    members.push_back(input);
  else
    std::cout<<" Queue is full "<<std::endl;
}

//deleting an element from Queue
 double  Queue::deQueue()
{
    double deleted {};
 if( members.size()==0)
   {
    std::cout<<"the Queue is empty"<<std::endl;
    return 0;
   }
 else
   {

  deleted = members.at(0);
    members.erase(members.begin());
    
  return deleted;
   }
    }
  

