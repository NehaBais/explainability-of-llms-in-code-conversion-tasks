#include <boost/filesystem.hpp>
#include <iostream>

int main() {
  // Create a filesystem object
  boost::filesystem::path current_dir = boost::filesystem::current_path();
  boost::filesystem::path root_dir =
      boost::filesystem::system_complete(boost::filesystem::path("/"));

  // Rename files and directories in the current directory
  boost::filesystem::rename(current_dir / "input.txt",
                            current_dir / "output.txt");
  boost::filesystem::rename(current_dir / "docs", current_dir / "mydocs");

  // Rename files and directories in the root directory
  boost::filesystem::rename(root_dir / "input.txt", root_dir / "output.txt");
  boost::filesystem::rename(root_dir / "docs", root_dir / "mydocs");

  return 0;
}