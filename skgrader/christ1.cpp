#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i;
	
	

    for(i = 1; i <= 7; i+=2)
    {
    	cout << " ";
    	cout << std::string(((7-i)/2),' ');
		cout << std::string(i,'*');
		cout << "\n";
    }
    
    for(i = 1; i <= 9; i+=2)
    {
    	cout << std::string(((9-i)/2),' ');
		cout << std::string(i,'*');
		cout << "\n";
    }
    
    return 0;
   
}
