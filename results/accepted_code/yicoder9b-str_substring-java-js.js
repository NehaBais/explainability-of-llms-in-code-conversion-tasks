function Substring(str, n, m) {
  return str.substring(n, n + m);
}

function Substring(str, n) {
  return str.substring(n);
}

function Substring(str) {
  return str.slice(0, -1);
}

function Substring(str, c, m) {
  let index = str.indexOf(c);
  if (index >= 0) {
    return str.substring(index, Math.min(index + m + 1, str.length));
  } else {
    throw new Error("Character not found in string");
  }
}

function Substring(str, sub, m) {
  let index = str.indexOf(sub);
  if (index >= 0) {
    return str.substring(index, Math.min(index + m + 1, str.length));
  } else {
    throw new Error("Substring not found in string");
  }
}
