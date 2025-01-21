#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;
int main() {
  for (auto &p : std::vector<std::string>{"input.txt", "docs"}) {
    if (fs::exists(p)) {
      if (fs::is_directory(p))
        printf("\"%s\" is a directory\n", p.c_str());
      else
        printf("\"%s\" is a file\n", p.c_str());
    } else
      printf("\"%s\" does not exist\n", p.c_str());
  }
}