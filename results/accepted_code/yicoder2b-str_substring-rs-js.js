let s = "abcप्रोगतीdef"; // This is the same string, just different encoding
let n = 2;
let m = 3;

// Print 3 characters starting at index 2 (cप्रो)
console.log(s.substring(n, n + m));

// Print all characters starting at index 2 (cप्रोगतीdef)
console.log(s.slice(n));

// Print all characters except the last (abcप्रोगतीde)
let s_reversed = s.split("").reverse().join("");
console.log(s_reversed.substring(1, m + 1));

// Print 3 characters starting with 'b' (bcप)
let cpos = s.indexOf("b");
console.log(s.slice(cpos, cpos + m));

// Print 3 characters starting with "गतीdef" (गतीde)
let spos = s.indexOf("गतीdef");
console.log(s.slice(spos, spos + m));
