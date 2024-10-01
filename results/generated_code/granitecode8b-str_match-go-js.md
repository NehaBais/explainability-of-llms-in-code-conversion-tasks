Here is the converted code from Golang to JavaScript:
```javascript
function match(first, second) {
  console.log(`1. ${first} starts with ${second}: ${first.startsWith(second)}`);
  let i = first.indexOf(second);
  console.log(`2. ${first} contains ${second}: ${i >= 0}`);
  if (i >= 0) {
    console.log(`2.1. at location ${i}`);
    for (let start = i + 1; ; ) {
      if ((i = first.indexOf(second, start)) < 0) {
        break;
      }
      console.log(`2.2. at location ${i}`);
      start += i + 1;
    }
    console.log('2.2. and that\'s all');
  }
  console.log(`3. ${first} ends with ${second}: ${first.endsWith(second)}`);
}
match("abracadabra", "abr");
```
The code converts the Golang functions to equivalent JavaScript functions using the same logic. The `strings` package is used in Go, and its equivalents in JavaScript are used for string manipulation. 
The optional requirements are handled as follows:
1. Printing the location of the match for part 2: The `indexOf` method is used to find the index of the first occurrence of the second string in the first string. Then, a loop is used to find all occurrences of the second string by starting the search from the index after the previous match.
2. Handling multiple occurrences of a string for part 2: The loop continues until no more occurrences are found, as indicated by the return value of `indexOf` being less than 0.

