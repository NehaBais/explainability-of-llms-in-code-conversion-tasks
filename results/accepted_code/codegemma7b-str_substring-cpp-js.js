const s = "0123456789";

const n = 3;
const m = 4;
const c = "2";
const sub = "456";

console.log(s.substring(n, n + m)); // 4567
console.log(s.substring(n)); // 456789
console.log(s.substring(0, s.length - 1)); // 012345678
console.log(s.substring(s.indexOf(c), n + m)); // 2345
console.log(s.substring(s.indexOf(sub), n + m)); // 4567
