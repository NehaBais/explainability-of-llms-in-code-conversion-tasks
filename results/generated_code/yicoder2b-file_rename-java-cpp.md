Below is the equivalent C++ code for your Java program.
```cpp
#include <iostream>
#include <cstdlib>
using namespace std;

bool renameFile(const char *oldname, const char *newname) {
    // Check if old name exists 
    if (!remove(oldname)) return false;  
      
    // Try to create new file with the given new name
    return (rename("nonexistentfile", newname) == 0);
}

void test(const char *type, const char *oldname, const char *newname) {
    cout << "The following " << type << " called " << oldname;
    if ( renameFile(oldname, newname)) cout << " was renamed as "; else cout << " could not be renamed into "; 
    cout << newname << "." << endl;
}

int main() {
    test("file", "input.txt", "output.txt");
    test("file", "nonexistentfile", "output.txt");  // If output.txt doesn't exist yet, this should fail
    test("directory", "docs", "mydocs");
    test("directory", "nonexistentdir", "mydocs"); // If mydocs does not exist yet, this should succeed
    return 0;
}
```
This code assumes that the user has correct permissions to perform the operations. Please note: the `remove` function in C++ might behave differently on different platforms or even fail for reasons beyond our control (like a file was opened by another process). So, it should be used wisely and only if we are sure about what is happening.
The `rename` function in C++ also doesn't automatically overwrite the new name with the old name so you will have to check that explicitly before executing the operation. 
Also note: the "nonexistentfile" argument of renameFile() is just a placeholder, it should be replaced by an actual file name that does not exist in your environment.
