#include <filesystem>
#include <system_error>

int main() {
  std::error_code ec;
  std::filesystem::create_directories("./path/to/dir", ec);

  if (ec) {
    throw std::system_error(ec, "An error occurred!");
  }
}