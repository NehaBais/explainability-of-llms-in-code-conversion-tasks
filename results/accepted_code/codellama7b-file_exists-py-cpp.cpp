#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>

int main() {
  std::string current_working_directory = "./";
  std::string input_file = "input.txt";
  std::string output_file = "/input.txt";
  std::string docs_folder = "docs";
  std::string root_folder = "/docs";

  if (std::filesystem::is_regular_file(current_working_directory +
                                       input_file)) {
    std::cout << "The file input.txt exists in the current working directory."
              << std::endl;
  } else {
    std::cout
        << "The file input.txt does not exist in the current working directory."
        << std::endl;
  }

  if (std::filesystem::is_regular_file(output_file)) {
    std::cout << "The file /input.txt exists in the root of the filesystem."
              << std::endl;
  } else {
    std::cout
        << "The file /input.txt does not exist in the root of the filesystem."
        << std::endl;
  }

  if (std::filesystem::is_directory(current_working_directory + docs_folder)) {
    std::cout << "The directory docs exists in the current working directory."
              << std::endl;
  } else {
    std::cout
        << "The directory docs does not exist in the current working directory."
        << std::endl;
  }

  if (std::filesystem::is_directory(root_folder)) {
    std::cout << "The root folder /docs exists." << std::endl;
  } else {
    std::cout << "The root folder /docs does not exist." << std::endl;
  }

  return 0;
}