#include <cstdlib>
#include <iostream>

int main() {
  try {
    if (rename("input.txt", "output.txt") != 0)
      throw std::runtime_error("Failed to rename input.txt into output.txt");

    if (rename("docs", "mydocs") != 0)
      throw std::runtime_error("Failed to rename docs into mydocs");

    // Renaming in the filesystem root requires the "/" as absolute path
    char *pwd = get_current_dir_name();
    if (chdir("/") != 0)
      throw std::runtime_error("Failed to change directory to '/'");

    if (rename("input.txt", "output.txt") != 0)
      throw std::runtime_error("Failed to rename /input.txt into /output.txt");

    if (chdir(pwd) != 0) // change back to original directory
      throw std::runtime_error(
          "Failed to change directory back to the original path");

    if (rename("docs", "mydocs") != 0)
      throw std::runtime_error("Failed to rename /docs into /mydocs");
  } catch (std::exception &e) {
    std::cerr << e.what() << '\n';
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}