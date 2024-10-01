let s = "abc文字化けdef";
let n = 2;
let m = 3;

// Print 3 characters starting at index 2 (c文字)
console.log(s.substring(n, n + m));

// Print all characters starting at index 2 (c文字化けdef)
console.log(s.substring(n));

// Print all characters except the last (abc文字化けde)
console.log(s.substring(0, s.length - 1));

// Print 3 characters starting with 'b' (bc文)
let cpos = s.indexOf("b");
if (cpos !== -1) {
  console.log(s.substring(cpos, cpos + m));
}

// Print 3 characters starting with "けd" (けde)
let spos = s.indexOf("けd");
if (spos !== -1) {
  console.log(s.substring(spos, spos + m));
}
