const s = "0123456789";
const n = 3;
const m = 4;
const c = "2";
const sub = "456";

console.log(s.substr(n, m));
console.log(s.substr(n));
console.log(s.substr(0, s.length - 1));
console.log(s.substr(s.indexOf(c), m));
console.log(s.substr(s.indexOf(sub), m));
