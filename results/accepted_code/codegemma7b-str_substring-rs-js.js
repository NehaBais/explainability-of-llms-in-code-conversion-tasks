const s = "abc文字化けdef";
const n = 2;
const m = 3;

// Print 3 characters starting at index 2 (c文字)
console.log(s.slice(n, n + m));

// Print all characters starting at index 2 (c文字化けdef)
console.log(s.slice(n));

// Print all characters except the last (abc文字化けde)
console.log(s.slice(0, -1));

// Print 3 characters starting with 'b' (bc文)
const cpos = s.indexOf("b");
console.log(s.slice(cpos, cpos + m));

// Print 3 characters starting with "けd" (けde)
const spos = s.indexOf("けd");
console.log(s.slice(spos, spos + m));
