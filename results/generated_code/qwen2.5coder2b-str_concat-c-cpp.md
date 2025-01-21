```cpp
#include <iostream>
#include <cstring>

char *sconcat(const char *s1, const char *s2)
{
  size_t len1 = strlen(s1);
  size_t len2 = strlen(s2);
  char *s0 = new char[len1+len2+1];
  
  strcpy(s0, s1);
  strcat(s0, s2);
  return s0;
}

int main()
{
   const char *s = "hello";
   
   std::cout << s << " literal" << std::endl;
   // or 
   std::cout << s << " literal" << std::endl;

   char *s2 = sconcat(s, " literal");
   std::cout << s2 << std::endl;
   delete [] s2;  // Remember to free the memory when done
}
```
