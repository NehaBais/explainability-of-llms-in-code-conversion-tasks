console.log("abcd".startsWith("ab"))); //returns true
console.log("abcd".endsWith("zn"))); //returns false
console.log("bb" in "abab")); //returns false
console.log("abab".includes("bb"))); // returns false
console.log("abab".includes("ab")))); // returns true
var loc1 = "abab".indexOf("bb");
var loc2 = "abab".indexOf("ab",loc1+1));
console.log(loc1 !== -1 ? `Found 'bb' at index ${loc1}` : 'No match found for string "bb"')););
console.log(loc2 !== -1 ? `Found 'ab' at index ${loc2} starting from previous found location ${loc1}+1` : 'No match found for string "ab" starting from previous found location "'+loc1+'+1')));