Here is the JavaScript version of your Python code:

```javascript
function startWith(str, substring) {
    return str.startsWith(substring);
}

function endsWith(str, substring) {
    return str.endsWith(substring);
}

function contains(str, substring) {
    return str.includes(substring);
}

function findAllLocations(str, substring) {
  let locations = [];
  let startIndex = 0;
  while ((startIndex = str.indexOf(substring, startIndex)) !== -1) {
    locations.push(startIndex);
    startIndex++;
  }
  return locations;
}

console.log(startWith("abcd", "ab")); // returns true
console.log(endsWith("abcd", "zn")); // returns false
console.log(contains("bb", "abab")); // returns false
console.log(contains("ab", "abab")); // returns true

let loc = findAllLocations("abab", "ab"); 
console.log('loc:', loc); // returns [0, 2]
```
This code first defines three functions to check if a string starts with or ends with another string, and whether one string contains the other. Then it uses the indexOf function to find all occurrences of a substring in a string. The function keeps track of the starting index for each search, increments it by 1 after each search, and checks until no more instances are found. It then returns an array with the indexes of each match.

Please note that `startsWith`, `endsWith` and `includes` are built-in JavaScript methods used to determine if a string starts with or ends with another string, and whether one string contains the other respectively.
