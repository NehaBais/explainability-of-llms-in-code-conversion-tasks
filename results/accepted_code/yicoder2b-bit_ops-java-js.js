function bitwise(a, b) {
  console.log("a AND b:", a & b); // Bitwise AND operation
  console.log("a OR b:", a | b); // Bitwise OR operation
  console.log("a XOR b:", a ^ b); // Bitwise XOR operation
  console.log("NOT a:", ~a >> 31); // Bitwise NOT operation
  console.log("a << b:", a << b); // Left shift operation
  console.log("a >> b:", a >> b); // Arithmetic right shift operation
  console.log("a >>> b:", a >>> b); // Logical right shift operation
  let arr = Array(b)
    .fill(0)
    .map((e, i) => (a << (i + 1)) & a || 1); // Left rotate operation
  console.log("a rol b:", arr[b - 1]);
  arr = Array(b)
    .fill(0)
    .map((e, i) => (a >> (i + 1)) & ~a || 1); // Right rotate operation
  console.log("a ror b:", arr[b - 1]);
}
