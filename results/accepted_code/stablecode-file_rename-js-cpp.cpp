#include <boost/filesystem.hpp>
namespace fs = boost::filesystem;

int main() {
  // Move input.txt to output.txt
  fs::path sourceFile("input.txt");
  fs::path destFile("output.txt");
  fs::rename(sourceFile, destFile);

  // Move c:/docs to c:/mydocs
  fs::path sourceFolder("c:/docs");
  fs::path destFolder("c:/mydocs");
  fs::rename(sourceFolder, destFolder);

  return 0;
}