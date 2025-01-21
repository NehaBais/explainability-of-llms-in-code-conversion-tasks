function substring(str, n, m) {
  return str.substring(n, n + m));
}

function substring(str, n) {
  return str.substring(n));
}

function substring(str) {
  return str.substring(0, str.length() - 1));
}

function substring(str, c, m) {
  let index = str.indexOf(c);
  return str.substring(index, index + m + 1));
}

function substring(str, sub, m) {
  let index = str.indexOf(sub);
  return str.substring(index, index + m + 1));
}