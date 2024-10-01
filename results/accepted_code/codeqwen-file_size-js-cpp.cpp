#include <boost/filesystem.hpp>

int main() {
  boost::filesystem::path p("input.txt");
  if (exists(p))
    std::cout << "File size of input.txt: " << boost::filesystem::file_size(p)
              << '\n';
  else
    std::cout << "No such file\n";

  p = "/input.txt";
  if (exists(p))
    std::cout << "File size of /input.txt: " << boost::filesystem::file_size(p)
              << '\n';
  else
    std::cout << "No such file\n";

  return 0;
}