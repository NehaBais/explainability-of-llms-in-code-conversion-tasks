let str1 = "abcd";
let str2 = "ab";
console.log(str1.startsWith(str2)); //returns true

str1 = "abcd";
str2 = "zn";
console.log(str1.endsWith(str2)); //returns false

str1 = "abab";
str2 = "bb";
console.log(str1.includes(str2)); //returns false

str1 = "abab";
str2 = "ab";
console.log(str1.includes(str2)); //returns true

let loc = 0;
str1 = "abab";
str2 = "bb";
while ((loc = str1.indexOf(str2, loc)) !== -1) {
  console.log(`Found ${str2} at position ${loc}`);
  loc += str2.length;
} //prints positions of 'bb' in 'abab', which is not found so nothing printed
