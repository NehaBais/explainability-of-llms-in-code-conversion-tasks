// Rotations
printf("rol:   %016b\n", ((int32_t)(ua << ub) | (int32_t)((ua >> (32 - ub)))));
}

void rotate_right(int16_t a, int16_t b) {
  uint32_t ua = a;
  uint32_t ub = b;

  printf("ror:   %016b\n", ((int32_t)(ua >> ub) | (ua << (32 - ub))));
}