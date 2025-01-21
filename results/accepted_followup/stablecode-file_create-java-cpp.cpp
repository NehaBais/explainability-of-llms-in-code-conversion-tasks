#include <filesystem>
#include <iostream>

int main() {
    std::filesystem::path currentDirPath(std::filesystem::current_path()));
    if (!std::filesystem::exists(currentDirPath))) {
        std::cout << "Directory does not exist." << std::endl;
        return 1;
      }
    return 0;
}