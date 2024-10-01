let s = "abc文字化けdef";
let n = 2;
let m = 3;

// Print 3 characters starting at index 2 (c文字)
console.log(Buffer.from(s.slice(n, n + m), "utf8").toString());

// Print all characters starting at index 2 (c文字化けdef)
console.log(Buffer.from(s.slice(n), "utf8").toString());

// Print all characters except the last (abc文字化けde)
console.log(
  Buffer.from(s.slice(0, s.length - 1), "utf8")
    .toString()
    .split("")
    .reverse()
    .join(""),
);

// Print 3 characters starting with 'b' (bc文)
let cpos = s.indexOf("b");
if (cpos !== -1) {
  console.log(Buffer.from(s.slice(cpos, cpos + m), "utf8").toString());
}

// Print 3 characters starting with "けd" (けde)
let spos = s.indexOf("けd");
if (spos !== -1) {
  console.log(Buffer.from(s.slice(spos, spos + m), "utf8").toString());
}
