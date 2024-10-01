#include
#include

int main() {
  const char *err = "File move error";
  std::error_code ec;
  if (std::rename("input.txt", "output.txt", &ec) != 0 && ec != std::errc()) {
    throw std::system_error(ec, err);
  }
  if (std::rename("docs", "mydocs", &ec) != 0 && ec != std::errc()) {
    throw std::system_error(ec, err);
  }
  if (std::rename("/input.txt", "/output.txt", &ec) != 0 && ec != std::errc()) {
    throw std::system_error(ec, err);
  }
  if (std::rename("/docs", "/mydocs", &ec) != 0 && ec != std::errc()) {
    throw std::system_error(ec, err);
  }
  return 0;
}