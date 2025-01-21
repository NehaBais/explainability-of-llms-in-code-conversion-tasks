let s = "ABCDEFGH";
let n = 2;
let m = 3;

// Display a substring starting from n characters in and of m length
console.log("Start", n, "length", m, ":    ", s.substring(n, n + m));

// Starting from n characters in, up to the end of the string
console.log("Start", n, "to end:      ", s.substring(n));

// Whole string minus the last character
console.log("All but last:         ", s.slice(0, -1));

// Starting from a known character within the string and of m length
let dx = s.indexOf("D");
console.log("Start 'D', length", m, ":  ", s.substring(dx, dx + m));

// Starting from a known substring within the string and of m length
let sx = s.indexOf("DE");
console.log(`Start "DE", length ${m}: `, s.substring(sx, sx + m));
