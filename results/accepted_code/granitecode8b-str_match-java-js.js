let str1 = "abcd";
let str2 = "ab";
// Determining if the first string starts with second string
console.log(str1.startsWith(str2)); //true
// Determining if the first string contains the second string at any location
let index = str1.indexOf(str2);
if (index > -1) {
  console.log("String found at index " + index); //print the location of the match
} else {
  console.log("String not found");
}
// Determining if the first string ends with the second string
console.log(str1.endsWith(str2)); //false
