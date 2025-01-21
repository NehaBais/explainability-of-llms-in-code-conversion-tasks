let s = "abcdefgh";
let n = 2,
  m = 3,
  char = "d",
  chars = "cd";

// starting from n=2 characters in and m=3 in length;
console.log(s.slice(n - 1, n + m - 1));

// starting from n characters in, up to the end of the string;
console.log(s.slice(n - 1));

// whole string minus last character;
console.log(s.slice(0, -1));

// starting from a known character char="d" within the string and of m length;
let indx = s.indexOf(char);
console.log(s.slice(indx, indx + m));

// starting from a known substring chars="cd" within the string and of m length.
indx = s.indexOf(chars);
console.log(s.slice(indx, indx + m));
