#include
#include

int main() {
  std::string input("input.txt");
  std::string output("output.txt");
  std::string docs("docs");
  std::string mydocs("mydocs");

  if (rename(input.c_str(), output.c_str()) == -1) {
    std::cerr << "Error renaming input.txt to output.txt" << std::endl;
    return 1;
  }

  if (rename(docs.c_str(), mydocs.c_str()) == -1) {
    std::cerr << "Error renaming docs to mydocs" << std::endl;
    return 1;
  }

  input = "/" + input;
  output = "/" + output;
  docs = "/" + docs;
  mydocs = "/" + mydocs;

  if (rename(input.c_str(), output.c_str()) == -1) {
    std::cerr << "Error renaming /input.txt to /output.txt" << std::endl;
    return 1;
  }

  if (rename(docs.c_str(), mydocs.c_str()) == -1) {
    std::cerr << "Error renaming /docs to /mydocs" << std::endl;
    return 1;
  }

  return 0;
}