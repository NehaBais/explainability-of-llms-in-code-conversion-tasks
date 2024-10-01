const s = "hello";
let s2;
console.log(`${s} literal`);
// or
console.log(`${s}${" literal"}`);
s2 = sconcat(s, " literal");
console.log(s2);
free(s2);
function sconcat(s1, s2) {
  return s1 + s2;
}
