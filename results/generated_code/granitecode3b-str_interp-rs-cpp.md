Here's the equivalent C++ code for the given Rust code snippet:
```
#include 
using namespace std;
int main() {
 string original = "Mary had a {} lamb";
 string value = "big";
 string interpolated = "";
 
 // Replace {} in the original string with value
 size_t pos = original.find("{}");
 if (pos != string::npos) {
 interpolated = original.replace(pos, 1, value);
 } else {
 interpolated = original;
 }
 
 cout << interpolated << endl;
 
 // Specify order
 original = "{1} had a {0} lamb";
 value = "little";
 if (pos != string::npos) {
 interpolated = original.replace(pos, 1, value);
 } else {
 interpolated = original;
 }
 cout << interpolated << endl;
 
 // Or named arguments if you prefer
 original = "{name} had a {adj} lamb";
 value = "little";
 map replacements = {{"adj", "little"}, {"name", "Mary"}};
 for (auto const& [key, val] : replacements) {
 size_t pos = original.find("{" + key + "}");
 if (pos != string::npos) {
 interpolated = original.replace(pos, 1, val);
 } else {
 interpolated = original;
 break;
 }
 }
 cout << interpolated << endl;
 
 return 0;
}
```
This C++ code snippet demonstrates the use of string interpolation in a few different ways. Firstly, it replaces the {} character sequence in an original string with a specified value. Secondly, it specifies the order of replacement by explicitly specifying the order of the values to be inserted into the string. Finally, it uses named arguments to specify the values to be inserted into the string. The code also demonstrates how to use a map to store the values and names for the named argument replacements.

