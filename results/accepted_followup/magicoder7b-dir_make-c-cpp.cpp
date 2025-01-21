#include <boost/filesystem.hpp>
#include <iostream>

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cerr << "usage: " << argv[0] << " <path>\n";
    return 1;
  }

  boost::filesystem::path p(argv[1]);
  while (!p.empty()) {
    if (boost::filesystem::exists(p)) {
      if (!boost::filesystem::is_directory(p)) {
        std::cerr << "Could not create directory '" << argv[1]
                  << "' as a file with the same name exists.\n";
        return 1;
      }
    } else {
      boost::system::error_code ec;
      boost::filesystem::create_directories(p, ec);

      if (ec) {
        std::cerr << "Could not create directory '" << argv[1]
                  << "' due to the following error: " << ec.message() << "\n";
        return 1;
      }
    }

    p = p.parent_path();
  }

  std::cout << "Directory '" << argv[1] << "' was successfully created.\n";

  return 0;
}