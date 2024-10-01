#include
#include
int main() {
  const char *err = "File move error";
  std::string input_file("input.txt");
  std::string output_file("output.txt");
  std::string docs_dir("docs");
  std::string mydocs_dir("mydocs");
  if (std::rename(input_file.c_str(), output_file.c_str()) != 0) {
    std::cerr << err << std::endl;
    return 1;
  }
  if (std::rename(docs_dir.c_str(), mydocs_dir.c_str()) != 0) {
    std::cerr << err << std::endl;
    return 1;
  }
  std::string root_input_file("/input.txt");
  std::string root_output_file("/output.txt");
  std::string root_docs_dir("/docs");
  std::string root_mydocs_dir("/mydocs");
  if (std::rename(root_input_file.c_str(), root_output_file.c_str()) != 0) {
    std::cerr << err << std::endl;
    return 1;
  }
  if (std::rename(root_docs_dir.c_str(), root_mydocs_dir.c_str()) != 0) {
    std::cerr << err << std::endl;
    return 1;
  }
  return 0;
}