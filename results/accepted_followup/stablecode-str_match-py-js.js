console.log("abcd".startsWith("ab"))); 
console.log("abcd".endsWith("zn"))); 
console.log("bb" in "abab")); 
console.log("abab".includes("bb")))); 
console.log("abab".includes("ab")))); 
var loc1 = "abab".indexOf("bb"); 
var loc2 = "abab".indexOf("ab",loc1+1)); 
console.log(loc1 !== -1 ? `Found 'bb' at index ${loc1}}` : 'No match found for string "bb"');); 
console.log(loc2 !== -1 ? `Found 'ab' at index ${loc2}} starting from previous found location ${loc1}+1` : 'No match found for string "ab" starting from previous found location "'+loc1+'+1')));