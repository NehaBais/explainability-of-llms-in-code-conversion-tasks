console.log("abcd".startsWith("ab")); //returns true
console.log("abcd".endsWith("zn")); //returns false
console.log("abab".includes("bb")); //returns false
console.log("abab".includes("ab")); //returns true
let loc = "abab".indexOf("bb"); //returns -1
loc = "abab".indexOf("ab", loc + 1); //returns 2

let str = "abab";
let subStr = "ab";
let locations = [];
let index = -1;
while ((index = str.indexOf(subStr, index + 1)) !== -1) {
  locations.push(index);
}
console.log(locations); // prints [0, 2]
