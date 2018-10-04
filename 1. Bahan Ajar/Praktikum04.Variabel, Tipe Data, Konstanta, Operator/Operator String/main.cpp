#include <iostream>
#include <string>
int main ()
{
  std::string str1, str2, str3, str4;
  str1 = "PRIBAD";  // c-string
  str2 = 'I';       // single character
  str3 = str1+str2; // string
  str4 = (str1+=str2); // string
  std::cout <<"str1 = "<< str1 << '\n';
  std::cout <<"str2 = "<< str2 << '\n';
  std::cout <<"CARA 1 ==> str1+str2= ==> "<< str3 << '\n';
  std::cout <<"CARA 2 ==> str1+=str2 ==> "<< str4 << '\n';
  return 0;
}
