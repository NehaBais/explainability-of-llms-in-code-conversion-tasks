#include
#include
int main() {
  std::string currentDirectory = "."; // current working directory
  std::string sourceFile = "input.txt";
  std::string destinationFile = "output.txt";
  std::string sourceDirectory = "docs";
  std::string destinationDirectory = "mydocs";

  // rename file in current directory
  std::string command = "mv " + currentDirectory + "/" + sourceFile + " " +
                        currentDirectory + "/" + destinationFile;
  system(command.c_str());
  // rename file in filesystem root
  command = "sudo mv /" + sourceFile + " /" + destinationFile;
  system(command.c_str());

  // rename directory in current directory
  command = "mv " + currentDirectory + "/" + sourceDirectory + " " +
            currentDirectory + "/" + destinationDirectory;
  system(command.c_str());
  // rename directory in filesystem root
  command = "sudo mv /" + sourceDirectory + " /" + destinationDirectory;
  system(command.c_str());

  return 0;
}