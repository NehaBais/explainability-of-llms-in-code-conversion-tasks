```cpp
#include <iostream>
#include <string>

bool startswith(std::string str, std::string prefix) {
    if(str.length() < prefix.length())
        return false;
    for(int i=0; i<prefix.length(); ++i)
        if(str[i] != prefix[i])
            return false;
    return true;
}

bool endswith(std::string str, std::string suffix) {
    if(str.length() < suffix.length())
        return false;
    int s = str.length()-1;
    for(int i=suffix.length()-1; i>=0; --i)
        if(str[s--] != suffix[i])
            return false;
    return true;
}

int contains(std::string str, std::string substr) {
    size_t pos = 0;
    while((pos=str.find(substr, pos)) != std::string::npos){
        std::cout << "Substring found at: " << pos << '\n';
        ++pos; 
    }
    return pos == std::string::npos ? -1 : pos;
}

int main() {
    std::string str = "abcd";
    std::string prefix = "ab";
    if(startswith(str, prefix))
        std::cout << "\"str\" starts with \"prefix\"\n";
    else
        std::cout << "\"str\" does not start with \"prefix\"\n";

    std::string suffix = "zn";
    if(endswith(str, suffix))
        std::cout << "\"str\" ends with \"suffix\"\n";
    else
        std::cout << "\"str\" does not end with \"suffix\"\n";

    std::string substr = "bb";
    std::string main_str = "abab";
    int loc = contains(main_str, substr);
    if(loc != -1)
        std::cout << "\"main_str\" contains \"substr\"\n";
    else
        std::cout << "\"main_str\" does not contain \"substr\"\n";

    return 0;
}
```
