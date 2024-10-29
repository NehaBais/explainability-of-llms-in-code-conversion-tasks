#include <filesystem>

int main() {
  try {
    std::filesystem::path current_dir = std::filesystem::current_path();
    std::filesystem::create_directory(current_dir / "docs");
    std::ofstream outFile1((current_dir / "output.txt").string());
    outFile1.close();

    std::filesystem::path root_dir = std::filesystem::v1::root_name();
    std::filesystem::create_directory(root_dir / "docs");
    std::ofstream outFile2((root_dir / "output.txt").string());
    outFile2.close();
  } catch (std::filesystem::filesystem_error &e) {
    std::cerr << e.what() << '\n';
  }
  return 0;
}