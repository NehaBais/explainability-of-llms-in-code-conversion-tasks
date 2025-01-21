function bitwiseBuiltIns(width, a, b) {
  var mask = (1 << width) - 1;
  console.log(
    `AND:     0b${a.toString(2).padStart(width, "0")}` +
      ` & 0b${b.toString(2).padStart(width, "0")}` +
      ` = 0b` +
      (a & b & mask).toString(2).padStart(width, "0"),
  );

  console.log(
    `OR:      0b${a.toString(2).padStart(width, "0")}` +
      ` | 0b${b.toString(2).padStart(width, "0")}` +
      ` = 0b` +
      ((a | b) & mask).toString(2).padStart(width, "0"),
  );

  console.log(
    `XOR:     0b${a.toString(2).padStart(width, "0")}` +
      ` ^ 0b${b.toString(2).padStart(width, "0")}` +
      ` = 0b` +
      ((a ^ b) & mask).toString(2).padStart(width, "0"),
  );

  console.log(
    `NOT:   ~ 0b${a.toString(2).padStart(width, "0")}` +
      ` = 0b` +
      (~a).toString(2).padStart(width, "0"),
  );

  console.log(`SHIFTS`);

  function rotr(width, a, n) {
    if (n < 0) {
      return rotl(width, a, -n);
    } else if (n == 0) {
      return a;
    } else {
      mask = (1 << width) - 1;
      a = a & mask;
      n = n % width;
      return (a >> n) | ((a & ((1 << n) - 1)) << (width - n));
    }
  }

  function rotl(width, a, n) {
    if (n < 0) {
      return rotr(width, a, -n);
    } else if (n == 0) {
      return a;
    } else {
      mask = (1 << width) - 1;
      a = a & mask;
      n = n % width;
      return ((a << n) & mask) | (a >> (width - n));
    }
  }

  function asr(width, a, n) {
    if (n < 0) {
      return (a << -n) & mask;
    } else if (n == 0) {
      return a;
    } else if (n >= width) {
      return 0;
    } else {
      mask = (1 << width) - 1;
      a = a & mask;
      n = n % width;
      return (a >> n) | ((a & ((1 << n) - 1)) << (width - n));
    }
  }
}

function helperFunctions(width, a) {
  var aa = a | (1 << width);

  console.log(
    `AND:     0b${a.toString(2).padStart(width, "0")}` +
      ` & 0b${aa.toString(2).padStart(width, "0")}` +
      ` = 0b` +
      (a & aa & mask).toString(2).padStart(width, "0"),
  );

  console.log(
    `OR:      0b${a.toString(2).padStart(width, "0")}` +
      ` | 0b${aa.toString(2).padStart(width, "0")}` +
      ` = 0b` +
      ((a | aa) & mask).toString(2).padStart(width, "0"),
  );

  console.log(
    `XOR:     0b${a.toString(2).padStart(width, "0")}` +
      ` ^ 0b${aa.toString(2).padStart(width, "0")}` +
      ` = 0b` +
      ((a ^ aa) & mask).toString(2).padStart(width, "0"),
  );

  console.log(
    `NOT:   ~ 0b${a.toString(2).padStart(width, "0")}` +
      ` = 0b` +
      (~a).toString(2).padStart(width, "0"),
  );

  console.log(`SHIFTS`);

  function rotr(width, a, n) {
    if (n < 0) {
      return rotl(width, a, -n);
    } else if (n == 0) {
      return a;
    } else {
      mask = (1 << width) - 1;
      a = a & mask;
      n = n % width;
      return (a >> n) | ((a & ((1 << n) - 1)) << (width - n));
    }
  }

  function rotl(width, a, n) {
    if (n < 0) {
      return rotr(width, a, -n);
    } else if (n == 0) {
      return a;
    } else {
      mask = (1 << width) - 1;
      a = a & mask;
      n = n % width;
      return ((a << n) & mask) | (a >> (width - n));
    }
  }

  function asr(width, a, n) {
    if (n < 0) {
      return (a << -n) & mask;
    } else if (n == 0) {
      return a;
    } else if (n >= width) {
      return 0;
    } else {
      mask = (1 << width) - 1;
      a = a & mask;
      n = n % width;
      return (a >> n) | ((a & ((1 << n) - 1)) << (width - n));
    }
  }
}

if (require.main === module) {
  bitwiseBuiltIns(8, 27, 125);
  helperFunctions(8, 27);
}
