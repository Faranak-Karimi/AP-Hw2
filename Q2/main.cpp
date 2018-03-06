// Faranak Karimi 9423089
#include<iostream>
#include<iomanip>
#include<fstream>
#include<vector>

int main()
{
  std::vector < std::string> s;
  std::ifstream myf {"Error_find.txt"};
  
    if(!myf)
      {
	std::cout<<"File not found...."<<std::endl;
	return 1;
      }
    // reading the text file
    do{
    std::string a;
    myf>>a;
    s.push_back(a);
    }while(!myf.eof());

    // number of consonantes in each word 
    size_t cons[s.size()]{};
     
    for(size_t i{} ; i < s.size() ; i++ )
      {
        for(size_t j{} ; j<=(s.at(i)).length();j++)
       {
	 if(std::isalpha((s.at(i))[j]))
	   {
	      cons[i]++;
	      
       	if(s[i][j]=='a' || s[i][j]=='e' || s[i][j]=='o' || s[i][j]=='i' || s[i][j]=='u')
	  cons[i]=0;//reseting the nuber of consonats
	
	if(std::isupper(s[i][j])) // if one is Upper_case it's OK. 
	   cons[i]=0;
	
	   }
       }

	//if number of consonantes are more than 5 print them
	if((cons[i]>=5))
    std::cout<<s.at(i)<<std::endl;
      }
    
  myf.close();
}
