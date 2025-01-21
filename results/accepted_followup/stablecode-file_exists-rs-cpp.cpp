#include
#include
using namespace std::filesystem;
int main() {
  for (const auto &file : {"input.txt", "docs", "/input.txt", "/docs"}) {
    if (exists(file)) {
      if (is_directory(file))) {
        cout << file << " is a directory." << endl;
      }
      else {
        cout << file << " is a file." << endl;
      }
    } else {
      cout << file << " does not exist." << endl;
    }
  }

  return 0;
}