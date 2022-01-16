#include <iostream>
#include <string>
#include <cctype>

int main()
{

   std::string chaineCara;
   getline(std::cin, chaineCara);
   for(int i = 0;i<(int)(chaineCara.length());i++)
   {
   
      chaineCara[i] = (char)(toupper(chaineCara[i]));
   
   }
   std::cout << chaineCara << "\n";
   
}
