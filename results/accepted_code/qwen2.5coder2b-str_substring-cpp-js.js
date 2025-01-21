function substr(string, start, length) {
  return string.substring(start, start + length);
}

let s = "0123456789";

let n = 3;
let m = 4;
let c = "2";
let sub = "456";

console.log(substr(s, n, m));
console.log(substr(s, n));
console.log(substr(s, 0, s.length - 1));
console.log(substr(s, s.indexOf(c), m));
console.log(substr(s, s.indexOf(sub), m));
