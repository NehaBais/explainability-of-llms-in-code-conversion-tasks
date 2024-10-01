This is the code I have so far:
```
std::string word1 = "little";
int num2 = 2;
float num3 = 4.0f;
bool bool4 = false;
std::cout << std::endl;
std::cout << "Hello!" << std::endl;
std::cout << String.format("%s had a %d lamb", word1, num2);
```
I'm not sure how to go about the interpolation and if I've even written it correctly so far. Any help would be appreciated. Thanks!

A: The string interpolation is done by using printf() function of C++. In your example you must use %s for a string, %d for an integer, %f for a floating point number (see the documentation) and %b or %B for a boolean value (in this case b/B make no difference in output).
Your code should be like this:
std::cout << String.format("%s had a %d lamb", word1, num2);
where you are replacing string "little" with variable word1 and int 2 with num2. You can change the format of numbers by using other codes that start from d (decimal), f(float) or b/B (boolean). The code is case sensitive and it should be lower case for numeric formats:
std::cout << String.format("%s had a %d lamb", word1, num2); // decimal number 2 - default format
std::cout << String.format("%s had a %f lamb", word1, num3); // floating point format of the number from variable num3
std::cout << String.format("%s had a %b lamb", word1, bool4); // boolean value from variable bool4 as true/false

A: It's pretty straight forward to convert it. Just replace the java code with c++. There are very few differences between them and they share most of the syntax, such that you should be able to get the answer in a matter of seconds if you know Java (if not use an online converter). 

