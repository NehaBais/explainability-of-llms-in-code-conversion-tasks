function bitwiseBuiltIns(width, a, b) {
  let mask = (1 << width) - 1;
  console.log(`AND: ${a & b & mask}
    OR:  ${a | (b & mask)}
    XOR: ${a ^ (b & mask)}
    NOT: ${-(~a & mask)}
    SHIFTS
      RIGHT: ${(a >> 1) & mask}
      LEFT:  ${(a << 1) & mask}`);
}

function rotr(width, a, n) {
  if (n < 0) return rotl(width, a, -n);
  else if (n == 0) return a;
  else {
    let mask = (1 << width) - 1;
    (a &= mask), (n %= width);
    return ((a >> n) | ((a & ((1 << n) - 1)) << (width - n))) & mask;
  }
}
function rotl(width, a, n) {
  if (n < 0) return rotr(width, a, -n);
  else if (n == 0) return a;
  else {
    let mask = (1 << width) - 1;
    (a &= mask), (n %= width);
    return ((a << n) & mask) | (a >> (width - n));
  }
}
function asr(width, a, n) {
  if (n < 0) return a << -n;
  else if (n == 0) return a;
  else {
    let mask = (1 << width) - 1,
      sign = a >> (width - 1);
    return ((a & ~sign) | ((-sign & (~mask >> n)) << (width - n))) >>> 0;
  }
}
function helperFuncs(width, a) {
  console.log(`ROTATE
      RIGHT: ${rotr(width, a, 1)}  ${rotr(width, a, 2)}   ${rotr(width, a, 4)}
      LEFT:  ${rotl(width, a, 1)}  ${rotl(width, a, 2)}   ${rotl(width, a, 4)}
    SIGN-EXTENDING ARITHMETIC SHIFT RIGHT
               ${asr(width, a, 1)} ${asr(width, (a | -(1 << width)) >>> 0, 1)}  ${asr(width, a, 2)} ${asr(width, (a | -(1 << width)) >>> 0, 2)}   ${asr(width, a, 4)} ${asr(width, (a | -(1 << width)) >>> 0, 4)}`);
}
bitwiseBuiltIns(8, 27, 125);
helperFuncs(8, 27);
