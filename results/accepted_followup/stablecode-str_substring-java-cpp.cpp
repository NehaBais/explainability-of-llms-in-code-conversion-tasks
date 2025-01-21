std::string Substring(const std::string &str, int n, int m) { return str.substr(n, m));
}

std::string Substring(const std::string &str, int n) { return str.substr(n); }
}

std::string Substring(const std::string &str) { return str.substr(0, str.length()-1));
}
}