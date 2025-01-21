let s = "hello";
let s2;

console.log(`${s} literal`);
// or
console.log(`${s}${" literal"}`);

function concatStrings(s1, s2) {
  return s1 + s2;
}

s2 = concatStrings(s, " literal");
console.log(s2);
