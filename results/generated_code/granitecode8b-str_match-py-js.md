Here's the converted code in JavaScript:
```javascript
const str1 = 'abcd';
const str2 = 'ab';
console.log(str1.startsWith(str2)); // Returns true
console.log(str1.includes(str2)); // Returns false
console.log(str1.endsWith(str2)); // Returns false
 
// Optional requirements:
let loc = str1.indexOf(str2);
console.log(loc); // Returns 0
loc = str1.indexOf(str2, loc + 1);
console.log(loc); // Returns 2
```
The `startsWith` method checks if the first string starts with the second string and returns a boolean value. The `includes` method checks if the first string contains the second string at any location and also returns a boolean value. The `endsWith` method checks if the first string ends with the second string and returns a boolean value.
 
For optional requirement 1, we use the `indexOf` method to find the location of the match for part 2. We first initialize the `loc` variable with the index of the first occurrence of `str2` in `str1`. Then, we use another call to `indexOf` with an additional argument that specifies the starting index for the search. This allows us to find the next occurrence of `str2` after the previous match.
 
For optional requirement 2, we can handle multiple occurrences of a string by using the `indexOf` method with the second argument set to the index of the previous match plus one. This will ensure that we only find the next occurrence of `str2`, rather than the first occurrence again.

