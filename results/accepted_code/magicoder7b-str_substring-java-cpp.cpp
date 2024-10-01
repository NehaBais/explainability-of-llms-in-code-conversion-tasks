#include <boost/utility/string_view.hpp>

std::string Substring(const std::string &str, int n, int m) {
  return boost::make_iterator_range(str.begin() + n, str.begin() + n + m);
}

std::string Substring(const std::string &str, int n) {
  return boost::make_iterator_range(str.begin() + n, str.end());
}

std::string Substring(const std::string &str) {
  return boost::make_iterator_range(str.begin(), str.end() - 1);
}

std::string Substring(const std::string &str, char c, int m) {
  auto pos = str.find(c);
  if (pos == std::string::npos)
    return ""; // Return empty string if character not found
  return boost::make_iterator_range(str.begin() + pos,
                                    str.begin() + pos + m + 1);
}

std::string Substring(const std::string &str, const std::string &sub, int m) {
  auto pos = str.find(sub);
  if (pos == std::string::npos)
    return ""; // Return empty string if substring not found
  return boost::make_iterator_range(str.begin() + pos,
                                    str.begin() + pos + m + sub.length());
}