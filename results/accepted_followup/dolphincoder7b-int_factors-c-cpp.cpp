#include <iostream>
#include <memory>
#include <vector>

struct Factors {
  std::vector<int> list;
  short count = 0;

  void xferFactors(std::vector<int> &flist, int flix) {
    for (size_t i = flix; i < this->count; ++i)
      this->list[i] = flist[i - flix];
    this->count += flix;
  }

  std::unique_ptr<Factors> factor(int num) const {
    std::vector<int> flist;
    for (size_t i = 1; i <= num / 2; ++i) {
      if (num % i != 0)
        continue;
      if (flist.size() == flist.capacity())
        xferFactors(flist, flist.size());
      flist.push_back(i);
      flist.push_back(num / i);
    }
    if (flist.size() < flist.capacity()) {
      if (num * num == num)
        flist.push_back(num);
      else if (flist.size() == 0)
        flist.reserve(2);
      xferFactors(flist, flist.size());
    }

    return std::make_unique<Factors>();
  }

  void display() const {
    for (size_t i = 0; i < this->count; ++i)
      std::cout << this->list[i] << ' ';
  }
};

int main(int argc, char *argv[]) {
  int nums2factor[] = {2059, 223092870, 3135, 45};

  for (size_t i = 0; i < sizeof(nums2factor) / sizeof(int); ++i) {
    Factors ftors;
    auto factors = ftors.factor(nums2factor[i]);
    std::cout << "factors of " << nums2factor[i] << ": ";
    factors->display();
    std::cout << '\n';
  }

  return 0;
}