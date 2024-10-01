 In C++, you can use `std::stringstream` and `boost::format` to perform string interpolation or replacement of defined character sequences in the string by values. Here is how you could convert your Java code to C++:

```cpp
#include <sstream> // std::stringstream 
#include <boost/format.hpp> // boost::str(boost::format...)

int main() {
    std::string adjective = "little";
    std::string lyric;
    lyric = boost::str(boost::format("Mary had a %s lamb") % adjective);
    
    // Now you can use `lyric` as you like...
}
```
Please note that this method requires the `boost` library, which is not included in standard C++. You need to install and include it in your project. It might be an overkill for such simple string formatting operation if it's only necessary for one or two places but it's a powerful tool for more complex cases.
