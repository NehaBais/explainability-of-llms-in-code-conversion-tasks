#include <filesystem>
using namespace std;
using namespace filesystem;

int main() {
  path input_file("input.txt");
  if (exists(input_file))
    rename(input_file, "output.txt");

  path docs_dir("docs");
  if (is_directory(docs_dir))
    rename(docs_dir, "mydocs");
}