#include <filesystem>
#include <fstream>
#include <iostream>

void create(const std::string &root, const char *filename,
            const char *directory_name) {
  try {
    // Create a new file in the specified root and name
    std::filesystem::path f_path = root + "/" + filename;
    std::ofstream out_file(f_path);

    // Check if the file was successfully created
    if (out_file.is_open())
      std::cout << "File " << filename << " created in: " << root << "\n";
    else
      throw std::runtime_error("Failed to create file!");

    out_file.close();

    // Create a new directory in the specified root and name
    std::filesystem::path d_path = root + "/" + directory_name;
    std::filesystem::create_directory(d_path);

    if (std::filesystem::is_directory(d_path))
      std::cout << "Directory " << directory_name << " created in: " << root
                << "\n";
    else
      throw std::runtime_error("Failed to create directory!");
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << '\n';
    exit(1); // Exit with code 1 for error
  }
}