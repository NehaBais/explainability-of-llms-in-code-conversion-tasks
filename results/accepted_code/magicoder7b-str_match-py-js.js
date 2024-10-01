console.log("abcd".startsWith("ab")); // returns True
console.log("abcd".endsWith("ab")); // returns False
console.log("bb" in "abab"); // returns false
console.log("ab" in "abab"); // returns true
var loc = "abab".indexOf("bb"); // returns -1
var loc = "abab".indexOf("ab"); // returns 0
var loc = "abab".indexOf("ab", loc + 1); // returns 2
