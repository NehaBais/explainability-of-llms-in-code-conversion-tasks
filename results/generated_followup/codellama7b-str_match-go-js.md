
The error message "SyntaxError: Unexpected token ':'" is caused by the fact that the JavaScript interpreter expects a semicolon (;) after an assignment statement, but it sees a colon (:) instead. This is because in JavaScript, colons are used to define properties or methods of objects, while semicolons are used to end statements.

To fix this issue, we need to add a semicolon after the assignment statement. Here's the corrected code:
```js
const strings = require('strings');

function match(first, second) {
  console.log(`1. ${first} starts with ${second}: ${strings.HasPrefix(first, second)}`);
  let i = strings.Index(first, second);
  if (i >= 0) {
    console.log(`2. ${first} contains ${second}: true, at location ${i}`);
    for (let start = i + 1;;) {
      if (i = strings.Index(first[start:], second)) {
        break;
      }
      console.log(`2. ${first} contains ${second}: true, at location ${start + i}`);
      start += i + 1;
    }
    console.log(`2. and that's all`);
  } else {
    console.log(`2. ${first} contains ${second}: false`);
  }
  console.log(`3. ${first} ends with ${second}: ${strings.HasSuffix(first, second)}`);
}

function main() {
  match("abracadabra", "abr");
}
```
