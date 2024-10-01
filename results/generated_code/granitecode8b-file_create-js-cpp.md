Here is the converted code from JavaScript to C++:
```
#include 
#include 
void fct(const boost::system::error_code& err) {
 if (err) std::cout << err.message() << std::endl;
}
int main() {
 boost::filesystem::path path("output.txt");
 boost::system::error_code ec;
 boost::filesystem::remove(path, ec); // remove file if it exists
 std::ofstream file(path.string()); // create new file
 file << ""; // write empty string to file
 path = "docs";
 boost::filesystem::remove_all(path, ec); // remove directory and all its contents if it exists
 boost::filesystem::create_directory(path); // create new directory
 return 0;
}
```
This code uses the Boost Filesystem library to create files and directories. The `boost::filesystem::remove` function is used to remove a file if it exists, and the `std::ofstream` class is used to create a new file. The `boost::filesystem::create_directory` function is used to create a new directory. The `boost::system::error_code` variable is used to check for errors in the file system operations.

