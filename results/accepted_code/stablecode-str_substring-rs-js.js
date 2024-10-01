var s = "abc文字化けdef";
var n = 2;
var m = 3;

    // Print 3 characters starting at index 2 (c文字))
console.log(s.slice(n, n + m)).join(''));

    // Print all characters starting at index 2 (c文字化けdef)
console.log(s.slice(n)).join(''));

console.log(s.slice(0, -1)).join(''));

    // Print 3 characters starting with 'b' (bc文))
var cpos = s.indexOf("b");
console.log(s.slice(cpos + n, cpos + n + m))).join(''));

    // Print 3 characters starting with 'けd' (けde))
var spos = s.indexOf("けd");
console.log(s.slice(spos + n, spos + n + m))).join(''));