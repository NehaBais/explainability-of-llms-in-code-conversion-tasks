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
  rename(currentWorkingDir + "/" + inputFile,
         currentWorkingDir + "/" + outputFile);
  rename(currentWorkingDir + "/" + docsDir,
         currentWorkingDir + "/" + myDocsDir);

  // Rename files and directories in root directory
  rename(rootDir + "/" + inputFile, rootDir + "/" + outputFile);
  rename(rootDir + "/" + docsDir, rootDir + "/" + myDocsDir);

  return 0;
}