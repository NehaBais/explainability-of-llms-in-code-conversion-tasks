#include <filesystem>
#include <iostream>
#include <string>

bool renameFile(const std::string &oldname, const std::string &newname) {
  try {
    std::filesystem::path from(oldname);
    std::filesystem::path to(newname);

    if (std::filesystem::exists(from)) {
            std::filesystem::rename(from, to));
            return true;
    }
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << '\n';
  }

  return false;
}

void test(const std::string &type, const std::string &oldname,
          const std::string &newname) {
  try {
    std::filesystem::path from = std::filesystem::absolute(oldname).normalize();
    std::filesystem::path to = std::filesystem::absolute(newname).normalize();

    if (std::filesystem::exists(from)) {
      bool success = renameFile(from.string(), to.string());
            std::cout << "The following " << type << " called " << oldname << 
                            (success ? " was renamed as " : " could not be renamed into ")) 
                            << newname << "." << '\n';
    } else {
      std::cerr << "Error: The file or directory '" << oldname
                << "' does not exist." << '\n';
    }
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << '\n';
  }
}

int main(int argc, char *argv[]) {
  test("file", "input.txt", "output.txt");
  test("directory", "docs", "mydocs");

  return 0;
}