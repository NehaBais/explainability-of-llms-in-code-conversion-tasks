Here is the equivalent JavaScript code for your requirement:

```javascript
// Given two strings, demonstrate string matching
function startsWith (str, substr){
  return str.indexOf(substr) === 0;
}

function contains (str, substr){
    if (str.length < substr.length) return false;
    else if (str == substr) return true;
    else {
        let index = str.indexOf(substr);
        return index != -1;
    }
}

function endsWith (str, substr){
  return str.lastIndexOf(substr) === str.length - substr.length;
}

// Optional requirements
var str = "abab"
var loc = str.indexOf("ab"); // returns 0
console.log(`The first occurrence of ab is at ${loc}`)

var multiOccurrencesLocations = []
while((index = str.indexOf("ab", index)) != -1){
  multiOccurrencesLocations.push(index);
  index++;
}
console.log(`The locations of all occurrences of ab: ${multiOccurrencesLocations}`)
```
This JavaScript code does exactly as per your requirement and the optional requirements are also addressed. However, the original Java code doesn't provide this functionality with built-in methods in Javascript, so we had to implement it manually.
