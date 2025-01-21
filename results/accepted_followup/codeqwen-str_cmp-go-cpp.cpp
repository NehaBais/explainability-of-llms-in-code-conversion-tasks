int result = std::string(str1).compare(
    std::string(str2), [](unsigned char c1, unsigned char c2) {
      return std::tolower(c1) < std::tolower(c2);
    });