#include
#include
using namespace std;
int main() {
  const char *err = "File move error";
  string input_file("input.txt");
  string output_file("output.txt");
  string docs_dir("docs");
  string mydocs_dir("mydocs");
  if (rename(input_file.c_str(), output_file.c_str()) != 0) {
    cerr << err << endl;
    return 1;
  }
  if (rename(docs_dir.c_str(), mydocs_dir.c_str()) != 0) {
    cerr << err << endl;
    return 1;
  }
}