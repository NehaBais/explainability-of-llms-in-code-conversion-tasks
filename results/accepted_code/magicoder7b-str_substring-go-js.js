function main() {
  var s = "ABCDEFGH";
  var n = 2;
  var m = 3;
  // for reference
  console.log("Index: ", "01234567");
  console.log("String:", s);
  // starting from n characters in and of m length
  console.log(`Start ${n}, length ${m}: ${s.substring(n, n + m)}`);
  // starting from n characters in, up to the end of the string
  console.log(`Start ${n}, to end: ${s.substring(n)}`);
  // whole string minus last character
  console.log(`All but last: ${s.slice(0, -1)}`);
  // starting from a known character within the string and of m length
  var dx = s.indexOf("D");
  console.log(`Start 'D', length ${m}: ${s.substring(dx, dx + m)}`);
  // starting from a known substring within the string and of m length
  var sx = s.indexOf("DE");
  console.log(`Start "DE", length ${m}: ${s.substring(sx, sx + m)}`);
}
