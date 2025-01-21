#include
#include
#include

void fct(std::string err_msg) {
  if (!err_msg.empty())
    std::cout << "Error: " << err_msg << std::endl;
}

int main() {

  try {
    auto current_path = std::filesystem::current_path();
    std::string path_str = current_path.string();
    std::filesystem::create_directory(path_str + "/docs"));
    std::filesystem::create_file(path_str + "/output.txt"));

  } catch (const std::exception &e) {
    fct(e.what());
  }

  try {
    auto root_path = std::filesystem::root_directory();
    std::string path_str = root_path.string();
    std::filesystem::create_directory("/docs"));
    std::filesystem::create_file("/output.txt"));

  } catch (const std::exception &e) {
    fct(e.what()));
  }

  return 0;
}