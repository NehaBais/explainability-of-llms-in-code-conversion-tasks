template <unsigned width> uint64_t rotl(uint64_t a, unsigned n) {
  if (n >= width)
    n %= width;
  return (a << n) | (a >> (width - n));
}

template <unsigned width> uint64_t rotr(uint64_t a, unsigned n) {
  if (n >= width)
    n %= width;
  return (a >> n) | (a << (width - n));
}

uint64_t bitwise_operations(uint64_t a) {
  // Note: The logic here may need to be corrected based on the actual
  // operations you want
  uint64_t signs = a & ((1ULL << (width - 1)));
  return a >> n | (signs << width - n);
}