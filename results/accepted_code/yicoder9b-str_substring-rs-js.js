let s = "abc文字化けdef";
let n = 2;
let m = 3;

// Print 3 characters starting at index 2 (c字符化)
console.log(s.slice(n, n + m));

// Print all characters starting at index 2 (c字符化けdef)
console.log(s.slice(n));

// Print all characters except the last (abc字符化けde)
console.log(s.slice(0, -1));

// Print 3 characters starting with 'b' (bc字符)
let cpos = s.indexOf("b");
console.log(s.slice(cpos, cpos + m));

// Print 3 characters starting with "けd" (けdef)
let spos = s.indexOf("けd");
console.log(s.slice(spos, spos + m));
