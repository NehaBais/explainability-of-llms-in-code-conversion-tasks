function substring(str, n, m) {
  if (typeof m === "undefined") {
    m = str.length - n;
  }
  return str.slice(n, n + m);
}

function substring(str, n) {
  return str.slice(n);
}

function substring(str) {
  return str.slice(0, str.length - 1);
}

function substring(str, c, m) {
  const index = str.indexOf(c);
  if (index === -1) return "";
  return str.slice(index, index + m + 1);
}

function substring(str, sub, m) {
  const index = str.indexOf(sub);
  if (index === -1) return "";
  return str.slice(index, index + m + 1);
}
