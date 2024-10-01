Below is the C++ equivalent of your Java code:

```C++
#include <iostream>
#include <string>
#include <filesystem>

bool renameFile(const std::string& oldname, const std::string& newname) 
{
    try 
    {
        std::filesystem::path from(oldname);
        std::filesystem::path to(newname);

        if (std::filesystem::exists(from))
        {
            std::filesystem::rename(from, to));
            return true;
        }
    } 
    catch (const std::exception& e)
    {
        std::cerr << "Error: " <<  e.what() << '\n';
    }

    return false;
}

void test(const std::string& type, const std::string& oldname, const std::string& newname) 
{
    try 
    {
        std::filesystem::path from = std::filesystem::absolute(oldname).normalize();
        std::filesystem::path to = std::filesystem::absolute(newname).normalize();

        if (std::filesystem::exists(from))
        {
            bool success = renameFile(from.string(), to.string());
            std::cout << "The following " << type << " called " << oldname << 
                            (success ? " was renamed as " : " could not be renamed into ")) 
                            << newname << "." << '\n';
        }
        else
        {
            std::cerr << "Error: The file or directory '" << oldname << "' does not exist." << '\n';
        }
    } 
    catch (const std::exception& e)
    {
        std::cerr << "Error: " <<  e.what() << '\n';
    }
}

int main(int argc, char* argv[]) 
{
    test("file", "input.txt", "output.txt");
    test("directory", "docs", "mydocs");

    return 0;
}
```

In C++, the `std::filesystem` library is used for file and directory operations, including renaming. 

The function `renameFile(oldname, newname)` takes two parameters: `oldname`, which represents the current name of the file or directory to be renamed, and `newname`, which represents the desired name of the file or directory after being renamed.

The function checks if the file or directory with the `oldname` exists. If it does exist, the function renames it using the `std::filesystem::rename()` function provided by the `std::filesystem` library. The new name of the file or directory is specified using the `to` variable.

If the file or directory with the `oldname` does not exist, an error message is displayed indicating that the file or directory could not be found for renaming.

The `test(type, oldname, newname)` function is used to test the `renameFile(oldname, newname)` function by passing in different values for the `type`, `oldname`, and `newname` parameters. The output of each test case is displayed on the console using `std::cout`.

The `main(argc, argv[])` function serves as the entry point of the program. It calls the `test()` function with different values for the `type`, `oldname`, and `newname` parameters to test the `renameFile()` function. The output of each test case is displayed on the console using `std::cout`.

Note: The above C++ code requires a compiler that supports C++17 or later, as it uses some features introduced in C++17.
