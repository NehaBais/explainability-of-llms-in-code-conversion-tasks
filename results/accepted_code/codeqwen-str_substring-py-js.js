var s = "abcdefgh";
var n = 2,
  m = 3,
  char = "d",
  chars = "cd";

// starting from n=2 characters in and m=3 length;
console.log(s.substring(n - 1, n + m));

// starting from n characters in, up to the end of the string;
console.log(s.substring(n - 1));

// whole string minus last character;
console.log(s.slice(0, -1));

// starting from a known character char="d" within the string and of m length;
var indx = s.indexOf(char);
console.log(s.substring(indx, indx + m));

// starting from a known substring chars="cd" within the string and of m length.
var indx = s.indexOf(chars);
console.log(s.substring(indx, indx + m));
