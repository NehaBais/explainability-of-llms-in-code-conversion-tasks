#include <iostream>
#include <memory>
#include <vector>

struct Factors {
  std::vector<int> list;
  short count = 0;

  void xferFactors(std::vector<int> &flist, int flix) {
    int newSize = this->count + flix;
    if (newSize > flix) {
      this->list.resize(newSize);
    } else {
      this->list.reserve(newSize);
    }
    for (size_t i = 0, j = this->count; i < newSize; ++i, ++j) {
      this->list[i] = flist[j];
    }
    this->count = newSize;
  }

  std::unique_ptr<Factors> factor(int num) {
    std::vector<int> flist;
    int dvsr;
    int flix = 0;
    this->count = 0;
    this->list.clear();

    for (dvsr = 1; dvsr * dvsr < num; ++dvsr) {
      if (num % dvsr != 0)
        continue;
      if (flix == flist.size()) {
        xferFactors(flist, flix);
        flix = 0;
      }
      flist[flix++] = dvsr;
      flist[flix++] = num / dvsr;
    }
    if (dvsr * dvsr == num)
      flist[flix++] = dvsr;
    if (flix > 0) {
      xferFactors(flist, flix);
    }

    return std::make_unique<Factors>();
  }

  void display() const {
    for (size_t i = 0; i < this->count; ++i) {
      std::cout << this->list[i] << ' ';
    }
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