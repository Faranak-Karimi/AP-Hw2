/* faranak karimi 9423089 */

#include<iostream>
#include<iomanip>
#include<fstream>
#include<vector>

int getmin (std::vector<int>);
int main()
{
  int a{1};
  std::vector<int> second , first ;
  // getting users number
  while(1)
    {
      std::cin>>a;
      first.push_back(a);
      if(a==0)
      break;
    }
  first.pop_back();
  
  //members of fisrt vector will be moved to another sorted accending
       while(first.size()!=0)
	{
      
	  for(size_t i{} ; i<first.size() ; i++)
	  {
   
	    if(getmin(first)== first.at(i)) 
	    {
	      second.push_back(first.at(i)); // the minimum will be relocate to first block 
	      first.erase(first.begin() +i); // the mininmum will be deleted and vector be resized
	    }
	  }
	}
	
	  
        
    for(size_t j{} ; j<second.size() ; j++)
      std::cout<<"   "<<second.at(j)<<"  ";
    std::cout<<std::endl;
  }

// this function gets the minimum of a vector

int   getmin (std::vector<int> v)
{
  int ans{2};
 ans= v.at(0);
 for( size_t i{} ; i<v.size() ; i++ )
    {
	if(v.at(i) <= ans )
	  ans=v.at(i);
    }
  return ans;
}
