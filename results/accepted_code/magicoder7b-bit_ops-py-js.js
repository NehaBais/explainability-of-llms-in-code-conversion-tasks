function bitwise_built_ins(width, a, b) {
  let mask = (1 << width) - 1;
  console.log(`    AND:`);
  console.log(`     0b${a.toString(2).padStart(width, "0")}`);
  console.log(`     & 0b${b.toString(2).padStart(width, "0")}`);
  console.log(`     = 0b${(a & b & mask).toString(2).padStart(width, "0")}`);
  console.log(`    OR:`);
  console.log(`     0b${a.toString(2).padStart(width, "0")}`);
  console.log(`     | 0b${b.toString(2).padStart(width, "0")}`);
  console.log(`     = 0b${((a | b) & mask).toString(2).padStart(width, "0")}`);
  console.log(`    XOR:`);
  console.log(`     0b${a.toString(2).padStart(width, "0")}`);
  console.log(`     ^ 0b${b.toString(2).padStart(width, "0")}`);
  console.log(`     = 0b${((a ^ b) & mask).toString(2).padStart(width, "0")}`);
  console.log(`    NOT:`);
  console.log(`   ~ 0b${a.toString(2).padStart(width, "0")}`);
  console.log(`     = 0b${(~a & mask).toString(2).padStart(width, "0")}`);
}

function rotl(width, a, n) {
  let mask = (1 << width) - 1;
  if (n < 0) return rotr(width, a, -n);
  else if (n === 0) return a;
  else {
    a = a & mask;
    return (a << n) | (a >> (width - n));
  }
}

function rotr(width, a, n) {
  let mask = (1 << width) - 1;
  if (n < 0) return rotl(width, a, -n);
  else if (n === 0) return a;
  else {
    a = a & mask;
    return (a >> n) | (a << (width - n));
  }
}

function asr(width, a, n) {
  let mask = (1 << width) - 1;
  if (n < 0) return a << -n;
  else if (n === 0) return a;
  else {
    a = a & mask;
    if ((a & (1 << (width - 1))) !== 0) {
      let signs = (1 << n) - 1;
      return (a >> n) | (signs << (width - n));
    } else {
      return a >> n;
    }
  }
}

function helper_funcs(width, a) {
  console.log(`    ROTATIONS`);
  for (let i = 0; i < 5; i++) {
    let b = rotl(width, a, i + 1);
    console.log(
      `      rotr(${width}, 0b${a.toString(2).padStart(width, "0")}, ${i + 1})`,
    );
    console.log(`      = 0b${b.toString(2).padStart(width, "0")}`);
  }

  console.log(`    SIGN-EXTENDING ARITHMETIC SHIFT RIGHT`);
  for (let i = 0; i < 5; i++) {
    let c = asr(width, a, 2 * i + 1);
    console.log(
      `      asr(${width}, 0b${a.toString(2).padStart(width, "0")}, ${2 * i + 1})`,
    );
    console.log(`      = 0b${c.toString(2).padStart(width, "0")}`);
  }
}

bitwise_built_ins(8, 27, 125);
helper_funcs(8, 27);
