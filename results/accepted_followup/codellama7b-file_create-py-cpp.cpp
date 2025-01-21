#include <filesystem>
#include <iostream>
#include <string>

using namespace std;

void create(const string &directory) {
  // Create a new file called "output.txt" of size 0 bytes in the specified
  // directory
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
  // Call the function twice, once in the current working directory and once in
  // the filesystem root
  create(".");
  create("/");
  return 0;
}