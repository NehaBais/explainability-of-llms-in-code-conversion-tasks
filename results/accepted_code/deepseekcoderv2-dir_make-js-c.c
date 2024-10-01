void mkdirp(const char *path_to_directory, void (*callback)(int status)) {
  std::filesystem::path dir(path_to_directory);
  if (std::filesystem::create_directories(dir)) {
    callback(0); // Success!
  } else {
    callback(-1); // Failure!
  }
}