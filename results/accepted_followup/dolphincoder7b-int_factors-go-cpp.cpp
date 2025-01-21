void printFactors(int64_t nr) {
  if (nr < 1) {
    std::cout << "Factors of  " << nr << " not computed\n";
    return;
  }
  std::cout << "Factors of  " << nr << ":  ";
  std::vector<int64_t> fs(1, 1);
  auto apf = [&](int64_t p, int e) {
    int n = static_cast<int>(fs.size());
    for (int i = 0, pp = p; i < e; ++i, pp *= p) {
      for (int j = 0; j < n; ++j) {
        fs.push_back(fs[j] * pp);
      }
    }
  };
  int64_t e = 0;
  while (!(nr & 1)) {
    nr >>= 1;
    ++e;
  }
  apf(2, e);
  for (int64_t d = 3; nr > 1; d += 2) {
    if (d * d > nr) {
      d = nr;
    }
    int e = 0;
    while (nr % d == 0) {
      ++e;
      nr /= d;
    }
    if (e > 0) {
      apf(d, e);
    }
  }
  for (const auto &f : fs) {
    std::cout << f << "  ";
  }
  std::cout << "\nNumber of factors  =  " << fs.size() << "\n";
}