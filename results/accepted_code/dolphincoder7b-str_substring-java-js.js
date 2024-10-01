function Substring(str, n = 0, m) {
  if (n > str.length || !m) {
    return str;
  } else if (!m) {
    return str.slice(n);
  } else {
    return str.slice(n, n + m);
  }
}
function Substring(str, n) {
  if (n < 0 || n > str.length) {
    throw new Error("Index out of bounds");
  }
  return str.slice(n);
}
function Substring(str) {
  return str.slice(0, -1);
}
function Substring(str, c, m) {
  const start = str.indexOf(c);
  if (start === -1) {
    throw new Error("Invalid character");
  }
  let end;
  if (!m) {
    end = str.length;
  } else {
    end = start + m + 1;
  }
  return Substring(str, start, end - start);
}
function Substring(str, sub, m) {
  const start = str.indexOf(sub);
  if (start === -1) {
    throw new Error("Substring not found");
  }
  let end;
  if (!m) {
    end = str.length;
  } else {
    end = start + m + 1;
  }
  return Substring(str, start, end - start);
}
