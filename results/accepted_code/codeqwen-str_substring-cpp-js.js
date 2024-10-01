let s = "0123456789";

const n = 3;
const m = 4;
const c = "2";
const sub = "456";

console.log(s.substring(n, n + m));
console.log(s.substring(n));
console.log(s.slice(0, -1));
console.log(s.substring(s.indexOf(c), n + m));
console.log(s.substring(s.indexOf(sub), n + m));
