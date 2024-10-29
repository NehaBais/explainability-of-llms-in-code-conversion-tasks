function Substring(str, n, m) {
  return str.slice(n, n + m);
}

function Substring(str, n) {
  return str.slice(n);
}

function Substring(str) {
  return str.slice(0, str.length - 1);
}

function Substring(str, c, m) {
  let index = str.indexOf(c);
  if (index !== -1) {
    return str.slice(index, index + m + 1);
  } else {
    throw "Character not found";
  }
}

function Substring(str, sub, m) {
  let index = str.indexOf(sub);
  if (index !== -1) {
    return str.slice(index, index + sub.length + m + 1);
  } else {
    throw "Substring not found";
  }
}
