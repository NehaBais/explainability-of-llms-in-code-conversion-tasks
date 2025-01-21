// Determine if the first string starts with second string
functionstartsWith(str, substr) {
    return str.startsWith(substr);
}

// Determine if the first string contains the second string at any location
function contains(str, substr) {
    return str.includes(substr);
}

// Determine if the first string ends with the second string
function endsWith(str, substr) {
    return str.endsWith(substr);
}

// Example usage:
console.log(startsWith("abcd", "ab")); //returns true
console.log(endsWith("abcd", "zn")); //returns false
console.log(contains("abab", "bb")); //returns false
console.log(contains("abab", "ab")); //returns true
let loc = "abab".indexOf("bb"); 
console.log(loc); //returns -1
loc = "abab".indexOf("bb"); 
console.log(loc); //returns 0
loc = "abab".indexOf("ab", loc+1); //returns 2