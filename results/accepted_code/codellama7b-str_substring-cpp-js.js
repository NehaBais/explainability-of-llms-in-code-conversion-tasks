// JavaScript code
const s = "0123456789";
const n = 3;
const m = 4;
const c = "2";
const sub = "456";

console.log(s.substring(n, m)); // starting from n characters in and of m length
console.log(s.substring(n)); // starting from n characters in, up to the end of the string
console.log(s.substring(0, s.length - 1)); // whole string minus the last character
console.log(s.substring(s.indexOf(c), m)); // starting from a known character within the string and of m length
console.log(s.substring(s.indexOf(sub), m)); // starting from a known substring within the string and of m length
