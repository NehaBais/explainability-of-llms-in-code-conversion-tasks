function substring(s, n, m) {
  if (s === null || s.length < n + m) {
    return null;
  }

  // If m is negative, convert it to 'up to the mth char from right' equivalent.
  if (m < 0) {
    m = s.length + m - n + 1;
  }

  if (n < 0 || m < 0) {
    return null;
  }

  // Move the "s" pointer to beginning of substring
  for (; n > 0; s++, n--) {
    if (!s) {
      /* string ends before n: invalid */
      return null;
    }
  }

  const result = new Array(m);
  let i = 0;

  while (i < m && s[i]) {
    result[i] = s[i];
    i++;
  }

  // Null terminate the string
  result[i] = "\u0000";

  return result.join("");
}

function str_wholeless1(s) {
  return substring(s, 0, s.length - 1);
}

function str_fromch(s, ch, m) {
  const index = s.indexOf(ch);

  if (index === -1) {
    return null;
  }

  return substring(s, index, m);
}

function str_fromstr(s, inStr, m) {
  const index = s.indexOf(inStr);

  if (index === -1) {
    return null;
  }

  return substring(s, index, m);
}

const s = "hello world shortest program";

console.log(substring(s, 12, 5)); // get "short"
console.log(substring(s, 6, -1)); // get "world shortest program"
console.log(str_wholeless1(s)); // "... progra"
console.log(str_fromch(s, "w", 5)); // "world"
console.log(str_fromstr(s, "ro", 3)); // "rog"
