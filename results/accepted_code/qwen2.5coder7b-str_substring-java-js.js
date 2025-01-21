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
  var startIndex = str.indexOf(c);
  if (startIndex === -1) throw new Error("Character not found in string");
  return str.slice(startIndex, startIndex + m + 1);
}

function Substring(str, sub, m) {
  var startIndex = str.indexOf(sub);
  if (startIndex === -1) throw new Error("Substring not found in string");
  return str.slice(startIndex, startIndex + m + 1);
}
