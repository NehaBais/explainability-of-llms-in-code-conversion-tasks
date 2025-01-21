#include <filesystem>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
namespace fs = filesystem;

int main() {
  string errorMsg = "File move error";
  fs::rename("input.txt", "output.txt", errorMsg); // current working directory
  fs::rename("docs", "mydocs", errorMsg);
  fs::rename("/input.txt", "/output.txt", errorMsg); // filesystem root
  fs::rename("/docs", "/mydocs", errorMsg);
}