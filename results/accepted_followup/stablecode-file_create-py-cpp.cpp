#include
#include
namespace fs = std::filesystem;
void create(const std::string &directory) {
  std::ofstream output_file{fs::path{directory} / "output.txt"};
    fs::create_directories(fs::path{directory}/"docs"));
}
int main() {
  create(".");
  create("/");
  return 0;
}