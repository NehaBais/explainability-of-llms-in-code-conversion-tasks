function printSubstring(s, n, m) {
  console.log(s.substring(n, n + m));
  console.log(s.substring(n));
  console.log(s.split("").reverse().substring(1).split("").join(""));
  let cpos = s.indexOf("b");
  if (cpos !== -1) console.log(s.substring(cpos, cpos + m));

  let spos = s.indexOf("けd");
  if (spos !== -1) console.log(s.substring(spos, spos + m));
}

let s = "abc文字化けdef";
printSubstring(s, 2, 3);
