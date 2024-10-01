
Here's the C++ code that corresponds to the Python code:
```
#include <iostream>
#include <string>
#include <filesystem>

using namespace std;

void create(const string& directory) {
    // Create a new file called "output.txt" of size 0 bytes in the specified directory
    const string filename = "output.txt";
    const string outputFilePath = directory + "/" + filename;
    ofstream outputFile(outputFilePath);
    if (!outputFile.is_open()) {
        cout << "Error: Unable to create file " << outputFilePath << endl;
    }

    // Create a new directory called "docs" in the specified directory
    const string docsDirectory = "docs";
    const string docsDirectoryPath = directory + "/" + docsDirectory;
    bool success = std::filesystem::create_directory(docsDirectoryPath);
    if (!success) {
        cout << "Error: Unable to create directory " << docsDirectoryPath << endl;
    }
}

int main() {
    // Call the function twice, once in the current working directory and once in the filesystem root
    create(".");
    create("/");
    return 0;
}
```
Explanation:

1. The `using namespace std;` line imports the standard library namespace, allowing us to use the `cout` and `ofstream` classes without specifying their namespaces explicitly.
2. The `create()` function takes a `const string& directory` parameter that specifies the directory in which the file and directory will be created.
3. Inside the `create()` function, we first create a new file called "output.txt" of size 0 bytes in the specified directory using an `ofstream` object. We use the `is_open()` method to check if the file was successfully opened for writing. If it returns false, we print an error message to the console indicating that the file could not be created.
4. Next, we create a new directory called "docs" in the specified directory using the `create_directory()` function from the `std::filesystem` namespace. We use the `is_directory()` method to check if the directory was successfully created. If it returns false, we print an error message to the console indicating that the directory could not be created.
5. Finally, we call the `create()` function twice in the `main()` function, once with the current working directory and once with the filesystem root.

Note: In C++, you can use the `std::filesystem` namespace to perform file system operations like creating directories and files. You can also use the `std::ofstream` class to create a new file for writing, and the `std::ifstream` class to read from an existing file.
