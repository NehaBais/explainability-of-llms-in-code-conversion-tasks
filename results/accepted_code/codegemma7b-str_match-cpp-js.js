const s1 = "abcd";
const s2 = "abab";
const s3 = "ab";

// Beginning
console.log(s1.startsWith(s3));

// End
console.log(s1.endsWith(s3));

// Anywhere
const location = s1.indexOf(s2);
console.log(location !== -1);

// Handle multiple occurrences
let count = 0;
let index = s2.indexOf(s3);
while (index !== -1) {
  count++;
  index = s2.indexOf(s3, index + 1);
}
console.log(count);
