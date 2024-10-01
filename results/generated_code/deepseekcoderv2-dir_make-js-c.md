## Solution in C++

### Code Explanation 
The below code implements a function mkdirp that accepts two arguments - path_to_directory and callback which returns the result of the operation. This is done by checking if the directory exists using std::filesystem library, and then create the directories if it doesn't exist. If there are any errors during this process, it will call back with an error message or null depending on whether they have occurred or not respectively.
```
void mkdirp(const char* path_to_directory, void (*callback)(int status)) {
  std::filesystem::path dir(path_to_directory);
  if (std::filesystem::create_directories(dir)) {
    callback(0); // Success!
  } else {
    callback(-1); // Failure!
  }
}
```
### Example Usage: 
```c
#include <iostream>
int main() {
   mkdirp("new directory", [](int status) {
      if (status == 0) {
          std::cout << "Successfully created new directory" << endl;
       } else {
          cout << "Failed to create new directory." << endl;
       }
    });
   return 0;
}
```

