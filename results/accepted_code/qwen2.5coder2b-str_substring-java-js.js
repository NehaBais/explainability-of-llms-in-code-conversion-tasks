function substring(str, n, m) {
  if (m === undefined || m < 0) {
    throw new Error("Invalid value for 'm'");
  }
  return str.substring(n, n + m);
}

function substring(str, n) {
  if (n === undefined || n < 0 || n >= str.length) {
    throw new Error("Invalid value for 'n'");
  }
  return str.substring(n);
}

function substring(str) {
  return str.substring(0, str.length - 1);
}

function substring(str, c, m) {
  if (c === undefined || c < 0 || str.indexOf(c) === -1) {
    throw new Error("Invalid character 'c'");
  }
  let index = str.indexOf(c);
  return str.substring(index, index + m + 1);
}

function substring(str, sub, m) {
  if (sub === undefined || sub.length === 0 || str.indexOf(sub) === -1) {
    throw new Error("Invalid string 'sub'");
  }
  let index = str.indexOf(sub);
  return str.substring(index, index + m + 1);
}
