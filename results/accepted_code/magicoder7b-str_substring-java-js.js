function substring(str, n, m) {
  return str.slice(n, n + m);
}
function substring(str, n) {
  return str.slice(n);
}
function substring(str) {
  return str.slice(0, str.length - 1);
}
function substring(str, c, m) {
  let index = str.indexOf(c);
  if (index !== -1) {
    return str.slice(index, index + m + 1);
  } else {
    throw new Error("Character not found in string");
  }
}
function substring(str, sub, m) {
  let index = str.indexOf(sub);
  if (index !== -1) {
    return str.slice(index, index + m + 1);
  } else {
    throw new Error("Substring not found in string");
  }
}
