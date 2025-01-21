function bitwiseOperations(a, b) {
  // Bitwise OR
  console.log("a | b  = " + (a | b).toString(2).padStart(8, "0"));

  // Bitwise AND
  console.log("a & b  = " + (a & b).toString(2).padStart(8, "0"));

  // Bitwise XOR
  console.log("a ^ b  = " + (a ^ b).toString(2).padStart(8, "0"));

  // Bitwise NOT
  console.log("!a     = " + (~a).toString(2).padStart(8, "0"));

  // Left shift
  console.log("a << 3 = " + (a << 3).toString(2).padStart(8, "0"));

  // Right shift
  console.log(
    "a >> 3 = " +
      Math.trunc(a / Math.pow(2, 3))
        .toString(2)
        .padStart(8, "0"),
  );

  // Left rotate
  console.log("a << -3 = " + rotateLeft(a, b).toString(2).padStart(8, "0"));

  // Right rotate
  console.log("a >> -3 = " + rotateRight(a, b).toString(2).padStart(8, "0"));
}

function rotateLeft(value, shift) {
  return (value << shift) | (value >>> (32 - shift));
}

function rotateRight(value, shift) {
  return (value >>> shift) | (value << (32 - shift));
}

let a = 105;
let b = 91;

bitwiseOperations(a, b);
