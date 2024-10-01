function main() {
  let s = "ABCDEFGH";
  let n = 2,
    m = 3;

  // starting from n characters in and of m length
  console.log("Start " + n + ", length " + m + ":     " + s.slice(n, n + m));

  // starting from n characters in, up to the end of the string
  console.log("Start " + n + ", to end:       " + s.slice(n));

  // whole string minus last character
  console.log("All but last:          " + s.slice(0, -1));

  // starting from a known character within the string and of m length
  let dx = s.indexOf("D");
  console.log("Start 'D', length " + m + ":   " + s.slice(dx, dx + m));

  // starting from a known substring within the string and of m length
  let sx = s.indexOf("DE");
  console.log(`Start "DE", length ${m}:  ` + s.slice(sx, sx + m));
}
