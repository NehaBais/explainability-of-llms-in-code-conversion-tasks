Here's how you can do it in C++:
```
std::string original = "Mary had a X lamb";
std::string little = "little";
std::string replaced = original;
size_t pos = replaced.find("X");
if (pos != std::string::npos) {
 replaced.replace(pos, 1, little);
}
```
In this code, we first define the original string and the value we want to replace it with. We then create a new string variable called `replaced` and assign it the value of the original string.
Next, we use the `find()` function to find the position of the character sequence "X" in the `replaced` string. If the character sequence is found (i.e., if the return value of `find()` is not equal to `std::string::npos`), we use the `replace()` function to replace the character sequence with the value of the `little` variable.
Finally, we print out the `replaced` string to see the result of the interpolation. The output should be "Mary had a little lamb".

