#include <iostream>
#include <string>
using namespace std;

int main() {
  string currentWorkingDir = ".";
  string rootDir = "/";
  string inputFile = "input.txt";
  string outputFile = "output.txt";
  string docsDir = "docs";
  string myDocsDir = "mydocs";

  // Rename files and directories in current working directory
  rename(currentWorkingDir + "/" + inputFile.c_str(),
         currentWorkingDir + "/" + outputFile.c_str());
  rename(currentWorkingDir + "/" + docsDir.c_str(),
         currentWorkingDir + "/" + myDocsDir.c_str());

  // Rename files and directories in root directory
  rename(rootDir + "/" + inputFile.c_str(), rootDir + "/" + outputFile.c_str());
  rename(rootDir + "/" + docsDir.c_str(), rootDir + "/" + myDocsDir.c_str());

  return 0;
}