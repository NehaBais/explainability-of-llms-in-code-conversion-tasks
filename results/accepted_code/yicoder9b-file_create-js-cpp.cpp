#include <boost/filesystem.hpp>
using namespace boost::filesystem;

int main() {
  try {
    ofstream file("output.txt");
    file.close();
    create_directory("docs");

    current_path(initial_path() / path("/")); // Switch to filesystem root

    ofstream file1("/output.txt");
    file1.close();
    create_directory("/docs");
  } catch (const boost::filesystem::filesystem_error &ex) {
    std::cout << ex.what() << '\n';
  }
  return 0;
}