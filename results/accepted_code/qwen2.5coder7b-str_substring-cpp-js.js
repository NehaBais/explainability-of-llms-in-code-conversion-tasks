let s = "0123456789";

const n = 3;
const m = 4;
const c = "2";
const sub = "456";

console.log(s.slice(n, n + m));
console.log(s.slice(n));
console.log(s.slice(0, -1));
console.log(s.slice(s.indexOf(c), s.indexOf(c) + m));
console.log(s.slice(s.indexOf(sub)));
