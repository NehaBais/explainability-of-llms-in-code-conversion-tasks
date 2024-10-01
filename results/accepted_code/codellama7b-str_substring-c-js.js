function substring(s, n, m) {
  if (n < 0 || m < 0) {
    return null;
  }
  let result = s.substring(n, n + m);
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

const s = "hello world shortest program";

let r = substring(s, 12, 5); // get "short"
console.log(r);
r = str_wholeless1(s); // "... progra"
console.log(r);
r = str_fromch(s, 'w', 5); // "world"
console.log(r);
r = str_fromstr(s, "ro", 3); // "rog"
console.log(r);