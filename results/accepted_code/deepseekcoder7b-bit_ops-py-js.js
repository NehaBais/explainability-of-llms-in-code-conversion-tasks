function bitwise_built_ins(width, a, b) {
  let mask = (1 << width) - 1;

  console.log(
    "AND:     " +
      a.toString(2).padStart(width, "0") +
      " & " +
      b.toString(2).padStart(width, "0") +
      " = " +
      (a & b & mask).toString(2).padStart(width, "0"),
  );

  console.log(
    "OR:      " +
      a.toString(2).padStart(width, "0") +
      " | " +
      b.toString(2).padStart(width, "0") +
      " = " +
      ((a | b) & mask).toString(2).padStart(width, "0"),
  );

  console.log(
    "XOR:     " +
      a.toString(2).padStart(width, "0") +
      " ^ " +
      b.toString(2).padStart(width, "0") +
      " = " +
      ((a ^ b) & mask).toString(2).padStart(width, "0"),
  );

  console.log(
    "NOT:    ~" +
      a.toString(2).padStart(width, "0") +
      "= " +
      (~a & mask).toString(2).padStart(width, "0"),
  );
}
function rotr(width, x, r) {
  // right rotate
  return (x >> r) | (x << (width - r));
}

function rotl(width, x, r) {
  // left rotate
  return (x << r) | (x >> (width - r));
}

function asr(width, x, r) {
  // sign extend right rotate
  let mask = 1 << width; // could be (1 << width) - 1 too
  for (let i = 0; i < r; i++) {
    if ((x & 1) === 1) x = (x >> 1) | mask;
    else x >>= 1;
  }

  return x & ((1 << width) - 1); // could be mask too
}

function helper_funcs(width, a) {
  let mask = 256; // (1 << width) - 1; in JS number is represented upto 32 bits so if you want to use more than that then change this
  let topBit = a | 128; // could be (a | (1 << (width - 1))) too
  console.log("ROTATIONS: \n RIGHT rotations");
  for (let i = 1; i < 5; i++) {
    console.log(rotr(width, a, i).toString(2).padStart(width, "0"));
  }
  console.log("LEFT rotations: ");
  for (let i = 1; i < 5; i++) {
    console.log(rotl(width, a, i).toString(2).padStart(width, "0"));
  }

  console.log("SIGN-EXTENDING ARITHMETIC SHIFT RIGHT: ");
  for (let i = 1; i < 5; i++) {
    console.log(asr(width, a, i).toString(2).padStart(width, "0"));
  }
}
bitwise_built_ins(8, 27, 125);
helper_funcs(8, 27);
