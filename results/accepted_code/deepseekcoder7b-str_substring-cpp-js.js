let s = "0123456789";

const n = 3;
const m = 4;
const c = "2";
const sub = "456";

console.log(s.substring(n, n + m)); // Displays a substring starting from n characters in and of m length
console.log(s.substring(n)); // Starts from n character in, up to the end of the string
console.log(s.slice(0, s.length - 1)); // Whole string minus the last character
console.log(s.substring(s.indexOf(c), m + s.indexOf(c))); // Starts from a known character within the string and of m length
console.log(s.substring(s.indexOf(sub), m + s.indexOf(sub))); //Starts from a known substring within the string and of m length.
