function sConcat(s1, s2) {
  return `${s1}${s2}`;
}

let s = "hello";
console.log(`${s} literal`);

/* or */
console.log(`${s} literal`);

let s2 = sConcat(s, " literal");
console.log(s2);
