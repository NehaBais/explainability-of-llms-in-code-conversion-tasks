let s1 = "abcd";
let s2 = "abab";
let s3 = "ab";
//Beginning
console.log(s1.startsWith(s3));
//End
const endChecker = (str, suffix) => {
  return str.slice(-suffix.length) === suffix;
};
console.log(endChecker(s1, s3));
//Anywhere
let loc = s2.indexOf(s3);
if (loc != -1) {
  while (loc + s3.length <= s2.length) {
    loc = s2.indexOf(s3, loc + 1);
    console.log("Location: " + loc);
  }
} else {
  console.log("No matches found!");
}
