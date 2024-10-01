console.log("abcd".startsWith("ab")); //true
console.log("abcd".endsWith("zn")); //false
console.log("bb" in "abab"); //false
console.log("ab" in "abab"); //true
let loc = "abab".indexOf("bb"); //-1
loc = "abab".indexOf("ab"); //0
loc = "abab".indexOf("ab", loc + 1); //2
