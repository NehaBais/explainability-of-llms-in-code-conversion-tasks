#include
#include
void fct(const boost::system::error_code &err) {
  if (err)
    std::cout << err.message() << std::endl;
}
int main() {
  boost::filesystem::path path("output.txt");
  boost::system::error_code ec;
  boost::filesystem::remove(path, ec); // remove file if it exists
  std::ofstream file(path.string());   // create new file
  file << "";                          // write empty string to file
  path = "docs";
  boost::filesystem::remove_all(
      path, ec); // remove directory and all its contents if it exists
  boost::filesystem::create_directory(path); // create new directory
  return 0;
}