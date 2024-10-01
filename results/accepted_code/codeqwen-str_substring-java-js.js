function Substring(str, n, m) {
  return str.slice(n, n + m);
}

function Substring(str, n) {
  return str.slice(n);
}

function Substring(str) {
  return str.slice(0, -1);
}

function Substring(str, c, m) {
  return str.slice(str.indexOf(c), str.indexOf(c) + m + 1);
}

function Substring(str, sub, m) {
  return str.slice(str.indexOf(sub), str.indexOf(sub) + m + 1);
}
