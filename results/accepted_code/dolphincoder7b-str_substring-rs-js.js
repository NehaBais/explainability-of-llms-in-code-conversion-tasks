let s = "abc文字化けdef";
let n = 2;
let m = 3;

// Print 3 characters starting at index 2 (c文字)
console.log(s.slice(n, n + m)); // abc文

// Print all characters starting at index 2 (c文字化けdef)
console.log(s.slice(n)); // c文字化けdef

// Print all characters except the last (abc文字化けde)
let lastIndex = s.length - 1;
console.log(s.slice(0, lastIndex)); // abc文字化けd

// Print 3 characters starting with 'b' (bc文)
let cpos = s.indexOf("b");
if (cpos !== -1) {
  console.log(s.slice(cpos + 1, cpos + m + 1)); // bc文
}

// Print 3 characters starting with "けd" (けde)
let spos = s.indexOf("けd");
if (spos !== -1) {
  console.log(s.slice(spos + 2, spos + m + 2)); // けde
}
