let s = "0123456789";

let n = 3;
let m = 4;
let c = "2";
let sub = "456";

console.log(s.substr(n, m));
console.log(s.substr(n));
console.log(s.substr(0, s.length - 1));
console.log(s.substring(s.indexOf(c), s.indexOf(c) + m));
console.log(s.substring(s.indexOf(sub), s.indexOf(sub) + m));
