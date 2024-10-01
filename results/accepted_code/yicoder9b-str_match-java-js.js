let str1 = "abcd";
let str2 = "ab";

console.log(str1.startsWith(str2)); //returns true
console.log(str1.endsWith(str2)); //returns false
console.log(str1.indexOf(str2) > -1); //returns true
let loc = str1.indexOf(str2); //loc = 0
console.log(loc); //prints 0
loc = str1.indexOf(str2, loc + 1); //loc = 2
console.log(loc); //prints 2

let str = "abab";
let substr = "ab";
let positions = [];
for (
  let pos = str.indexOf(substr);
  pos != -1;
  pos = str.indexOf(substr, pos + 1)
) {
  positions.push(pos);
}
console.log(positions); //prints [0,2]
