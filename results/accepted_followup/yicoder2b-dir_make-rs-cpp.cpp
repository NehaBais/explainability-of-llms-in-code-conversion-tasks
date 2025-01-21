#include <filesystem> // Include to use filesystem features
#include <fstream>
#include <iostream>
#include <string>

int main() {
  const std::string path = "./path/to/dir";
  auto split_path = path.split('/'); // Split the path by '/'

  std::vector<std::string> folders_to_create;
  for (size_t i = 1; i < split_path.size(); ++i) {
    folders_to_create.push_back(
        split_path[i]); // Get all directories required to create the path
  }

  std::string currentDir = "";
  for (const auto &folder :
       folders_to_create) {     // Loop over each folder to create
    currentDir += folder + "/"; // Concatenate with a '/'
    if (!std::filesystem::exists(
            currentDir)) { // Check if the directory already exists
      try {
        std::filesystem::create_directory(currentDir); // If not, create it
      } catch (const std::exception &e) { // Catch any errors that may occur
        std::cerr << "An Error Occured: " << e.what()
                  << '\n'; // And print the error message to stderr
        return -1; // Exit with an error code, you may handle this differently
                   // in your application
      }
    }
  }

  return 0;
}