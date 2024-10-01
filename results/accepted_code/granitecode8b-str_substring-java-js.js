function substring(str, n, m) {
  return str.substring(n, n + m);
}
function substring(str, n) {
  return str.substring(n);
}
function substring(str) {
  return str.substring(0, str.length - 1);
}
function substring(str, c, m) {
  return str.substring(str.indexOf(c), str.indexOf(c) + m + 1);
}
function substring(str, sub, m) {
  return str.substring(str.indexOf(sub), str.indexOf(sub) + m + 1);
}
