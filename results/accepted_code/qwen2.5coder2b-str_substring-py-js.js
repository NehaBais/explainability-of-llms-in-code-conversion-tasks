let s = "abcdefgh";
let n = 2;
let m = 3;
let char = "d";
let chars = "cd";

// starting from n=2 characters in and of m=3 in length;
console.log(s.substring(n - 1, n + m - 1));

// starting from n characters in, up to the end of the string;
console.log(s.substring(n - 1));

// whole string minus last character;
console.log(s.substring(0, s.length - 1));

// starting from a known character char="d" within the string and of m length;
let index = s.indexOf(char);
if (index !== -1) {
  console.log(s.substring(index, index + m));
} else {
  console.log("The character '" + char + "' is not found in the string.");
}

// starting from a known substring chars="cd" within the string and of m length.
index = s.indexOf(chars);
if (index !== -1) {
  console.log(s.substring(index, index + m));
} else {
  console.log("The substring '" + chars + "' is not found in the string.");
}
