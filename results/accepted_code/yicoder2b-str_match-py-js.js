function startswith(str1, str2) {
  return str1.indexOf(str2) === 0;
}

function contains(str1, str2) {
  return str1.includes(str2);
}

function endswith(str1, str2) {
  return str1.lastIndexOf(str2) !== -1;
}

let test_string = "abcd";
console.log(startswith(test_string, "ab")); //returns true
console.log(endswith(test_string, "zn")); //returns false
console.log(contains(test_string, "bb")); //returns false
console.log(contains(test_string, "ab")); //returns true
let loc = test_string.indexOf("bb");
// Returns -1 because 'bb' is not found in the string
console.log(loc);
let loc2 = test_string.indexOf("ab", loc + 1);
// Returns 2 because 'ab' is found at index 2 of the string after starting from index 3
console.log(loc2);
