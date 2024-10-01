function Substring(str, n, m) {
  return str.substr(n, m);
}
function Substring(str, n) {
  return str.substr(n);
}
function Substring(str) {
  return str.substr(0, str.length - 1);
}
function Substring(str, c, m) {
  return str.substr(str.indexOf(c), str.indexOf(c) + m + 1);
}
function Substring(str, sub, m) {
  return str.substr(str.indexOf(sub), str.indexOf(sub) + m + 1);
}
