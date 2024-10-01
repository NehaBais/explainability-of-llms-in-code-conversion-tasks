function substring(s, n, m) {
  // check for null s
  if (typeof s === 'undefined' || s === null) {
    return null;
  }
  // negative m to mean 'up to the mth char from right'
  if (m < 0) {
    m = s.length + m - n + 1;
  }

  // n < 0 or m < 0 is invalid
  if (n < 0 || m < 0) {
    return null;
  }

  // make sure string does not end before n
  // and advance the "s" pointer to beginning of substring
  for (let i = 0; i < n; i++) {
    if (s[i] === '') {
      // string ends before n: invalid
      return null;
    }
  }

  const result = s.slice(n, m);
  return result;
}

function str_wholeless1(s) {
  return substring(s, 0, s.length - 1);
}

function str_fromch(s, ch, m) {
  return substring(s, s.indexOf(ch), m);
}

function str_fromstr(s, in, m) {
  return substring(s, s.indexOf(in), m);
}


// test the functions
const s = 'hello world shortest program';
console.log(substring(s, 12, 5)); // get "short"
console.log(substring(s, 6, -1)); // get "world shortest program"
console.log(str_wholeless1(s)); // "... progra"
console.log(str_fromch(s, 'w', 5)); // "world"
console.log(str_fromstr(s, 'ro', 3)); // "rog"