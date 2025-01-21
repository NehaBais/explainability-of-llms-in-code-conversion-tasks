#include <boost/filesystem.hpp>
#include <fstream>
using namespace boost::filesystem;

void create(const char *directory) {
  std::ofstream file((path(directory) + "/output.txt").string());

  path p = directory;
  while (!p.empty()) {
    if (create_directory(p / "docs"))
      return;            // success
    p = p.parent_path(); // try next level up
  }
}

int main() {
  create(".");
  create("/");

  return 0;
}