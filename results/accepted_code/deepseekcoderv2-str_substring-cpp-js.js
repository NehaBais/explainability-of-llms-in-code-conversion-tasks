let s = "0123456789";

let n = 3;
let m = 4;
let c = "2";
let sub = "456";

console.log(s.substring(n, n + m)); // Display a substring starting from n characters in and of m length
console.log(s.substring(n)); // Display a substring starting from n characters in, up to the end of the string
console.log(s.substring(0, s.length - 1)); // Display the whole string minus the last character
console.log(s.substring(s.indexOf(c), m)); // Display a substring starting from '2' and of length m
console.log(s.substring(s.indexOf(sub), m)); // Display a substring starting from "456" and of length m
