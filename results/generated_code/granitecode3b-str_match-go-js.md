Sure! Here's the equivalent JavaScript code that performs the same functionality:
```javascript
function match(str1, str2) {
  console.log("1. " + str1 + " starts with " + str2 + ": " + (str1.startsWith(str2)));
  let index = str1.indexOf(str2);
  console.log("2. " + str1 + " contains " + str2 + ": " + (index >= 0));
  if (index >= 0) {
    console.log("2.1. at location " + index + ",");
    let start = index;
    while ((index = str1.indexOf(str2, start)) >= 0) {
      console.log("2.2. at location " + index + ",");
      start = index + str2.length;
    }
    console.log("2.2. and that's all");
  }
  console.log("3. " + str1 + " ends with " + str2 + ": " + (str1.endsWith(str2)));
}
match("abracadabra", "abr");
```
Note that the `startsWith`, `indexOf`, and `endsWith` methods are available in JavaScript, while the `strings` package is not necessary for this task. The equivalent functionality can be achieved using string manipulation and iteration.

