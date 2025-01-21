// JavaScript code to display substrings based on provided conditions
function displaySubstrings(s) {
  const n = 2;
  const m = 3;

  // Starting from n characters in and of m length
  console.log(`Start ${n}, length ${m}:    ${s.slice(n, n + m)}`);

  // Starting from n characters in, up to the end of the string
  console.log(`Start ${n}, to end:      ${s.slice(n)}`);

  // Whole string minus the last character
  console.log(`All but last:         ${s.slice(0, -1)}`);

  // Starting from a known character within the string and of m length
  const dx = s.indexOf("D");
  if (dx !== -1) {
    console.log(`Start 'D', length ${m}:  ${s.slice(dx, dx + m)}`);
  }

  // Starting from a known substring within the string and of m length
  const sx = s.indexOf("DE");
  if (sx !== -1) {
    console.log(`Start "DE", length ${m}: ${s.slice(sx, sx + m)}`);
  }
}

// Example usage
const s = "ABCDEFGH";
displaySubstrings(s);
