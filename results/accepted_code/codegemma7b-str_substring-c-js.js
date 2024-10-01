function substring(s, n, m) {
  if (!s) return null;

  if (m < 0) m = s.length + m - n + 1;

  if (n < 0 || m < 0) return null;

  while (n > 0 && *s) {
    if (*s === '\0') return null;
    s++;
    n--;
  }

  const result = new Array(m + 1).fill('');
  result[0] = '\0';
  result.splice(0, m, s.slice(0, m));
  return result.join('');
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

const s = "hello world shortest program";

console.log(substring(s, 12, 5));		// get "short"
console.log(substring(s, 6, -1));		// get "world shortest program"
console.log(str_wholeless1(s));		// "... progra"
console.log(str_fromch(s, 'w', 5));	// "world"
console.log(str_fromstr(s, "ro", 3));	// "rog"