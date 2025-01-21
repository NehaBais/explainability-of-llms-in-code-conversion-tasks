let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";

// Beginning
s1.startsWith(s3); // true

// End
if (s1.length >= s3.length) {
  let endIndex = s1.length - s3.length;
  s1.endsWith(s3); // true
} else {
  console.log("EndsWith check failed: string length mismatch");
}

// Anywhere
let loc = s2.indexOf(s3); // returns -1
if (loc !== -1) {
  console.log("First occurrence at index:", loc);
}

let prevLoc = -1;
while ((loc = s2.indexOf(s3, prevLoc + 1)) !== -1) {
  console.log("Occurrence at index:", loc);
  prevLoc = loc;
}
