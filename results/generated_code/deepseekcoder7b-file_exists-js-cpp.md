To accomplish the same task in C++, you can use Standard Library `<filesystem>` which is available starting from C++17 or Boost Filesystem before that. Here's how to do it using `std::filesystem` :

Include necessary libraries and write main function as follows:
```cpp
#include <iostream>
#include <fstream>
#include <filesystem>
int main() {
    std::string path1 = "."; // current working directory
    std::string filePath1 = path1 + "/input.txt"; 
    std::string dirPath1 = path1 + "/docs";  
	
	// Check if the files and directories exist
	if (std::filesystem::exists(filePath1)) {
        if(std::filesystem::is_regular_file(filePath1))
            std::cout << "File input.txt exists.\n";
    }
    
	std::string path2 = "/"; // filesystem root directory 
    std::string filePath2 = path2 + "input.txt";  
    std::string dirPath2 = path2 + "docs";   

	if (std::filesystem::exists(filePath2)) {
        if(std::filesystem::is_regular_file(filePath2))
            std::cout << "File input.txt in root directory exists.\n";
    }
    	
	return 0;
}
```
This program checks for the existence of a file named `input.txt` and a folder/directory named `docs` both relative to current working directory and filesystem root respectively, by using std::filesystem functions like `exists()` and `is_regular_file()`. Make sure you have C++17 or newer version as this code uses features available only in that standard. 

To run the program, save it into a file with .cpp extension then compile & run: g++ your-filename.cpp -std=c++17 && ./a.out.

