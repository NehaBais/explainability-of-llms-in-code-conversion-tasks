function main() {
  const a = "abc";
  const b = "Bac".toLowerCase();

  if (a === b) console.log("The strings are equal");
  if (a !== b) console.log("The strings are not equal");
  if (a > b) console.log("The first string is lexically after the second");
  if (a < b) console.log("The first string is lexically before the second");
  if (a >= b)
    console.log("The first string is not lexically before the second");
  if (a <= b) console.log("The first string is not lexically after the second");

  const a2 = a.toUpperCase();
  const b2 = b.toUpperCase();
  // everything else, compare as above
}
