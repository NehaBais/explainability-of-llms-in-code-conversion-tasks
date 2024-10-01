// Determining if the first string starts with second string
let str1StartsWithstr2 = (firstStr, secondStr) => {
  return firstStr.startsWith(secondStr);
};
console.log(str1StartsWithstr2("abcd", "ab")); //returns true

// Determining if the first string ends with the second string
let str1EndsWithstr2 = (firstStr, secondStr) => {
  return firstStr.endsWith(secondStr);
};
console.log(str1EndsWithstr2("abcd", "zn")); //returns false

// Determining if the first string contains the second string at any location
let str1Containsstr2 = (firstStr, secondStr) => {
  if (firstStr.indexOf(secondStr) > -1) {
    console.log("Location of match: " + firstStr.indexOf(secondStr)); //print the location
    return true;
  } else {
    return false;
  } //returns True or False
};
console.log(str1Containsstr2("abab", "bb")); //returns -1 (false)
console.log(str1Containsstr2("abab", "ab")); //returns 0 (true)
