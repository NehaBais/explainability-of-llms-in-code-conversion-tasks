function main() {
  const string = "ABCDEFGH";

  // starting from n characters in and of m length
  console.log("Start 2, length 3:", string.slice(2, 5));

  // starting from n characters in, up to the end of the string
  console.log("Start 2, to end:", string.slice(2));

  // whole string minus last character
  console.log("All but last:", string.slice(0, -1));

  // starting from a known character within the string and of m length
  const idx = string.indexOf("D");
  console.log(`Start 'D', length 3:`, string.slice(idx, idx + 3));

  // starting from a known substring within the string and of m length
  const substrIndex = string.indexOf("DE");
  console.log(
    'Start "DE", length 3:',
    string.slice(substrIndex, substrIndex + 3),
  );
}

main();
