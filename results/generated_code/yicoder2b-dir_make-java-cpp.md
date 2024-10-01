The equivalent C++ code for the given Java program would be as follows - 

```cpp
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <unistd.h>

using namespace std;

// Helper function to split a string by '/' 
void split(const string &str, vector<string>& tokens, const string &delim = "/") {
    tokens.clear();
    size_t prev = 0, pos = str.find(delim);
    while (pos != std::string::npos) {
        tokens.push_back(str.substr(prev, pos - prev));
        prev = pos + delim.length();
        pos = str.find(delim, prev);
    }
    if (prev < str.length())
        tokens.push_back(str.substr(prev));
}

int mkdirs(const string& path) {
  vector<string> components;
  split(path, components);

  for (size_t i = 0; i < components.size(); ++i){
    string dir = "";
    for (size_t j=0;j<=i;++j) {
      dir += components[j] + "/";
    }
    if(!access(dir.c_str(), F_OK)) continue;
    if(mkdir(dir.c_str(), S_IRWXU | S_IRWXG | S_IROTH | S_IWOTH) && errno != EEXIST){
      perror("mkdirs");
      return -1;
    }
  }
  return 0;
}

int main() {
  const string path = "/C/parent/test/";
  if (mkdirs(path) == 0){
    cout << "Path successfully created" << endl;
  } else{
    cerr << "Failed to create directory: "<< strerror(errno) << endl;
  }
  return 0;
}
```

This C++ program does essentially the same thing as the Java version. It creates directories based on '/' delimiters in a string path. Note that it uses the access() function to check if the directory already exists, and the mkdirs() function from cstdlib to create a directory if it doesn't exist yet.

Please replace "/C/parent/test/" with your own directory you want to make.
