Sure, I can help you convert this code from Go to JavaScript! Here's the converted code:
```
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
Note that in JavaScript, we use `console.log()` to print output instead of using `fmt.Printf()`. Also, in Go, the `strings.Index()` function returns -1 if the substring is not found, whereas in JavaScript it returns -1 if the search value is not a string or if the specified string does not contain any matches. So we have to check for -1 explicitly in JavaScript.

Also, note that in Go, the `match()` function takes two arguments, but in JavaScript, we only pass one argument to the `match()` function since it's not necessary to pass the second argument as it is already available through the `arguments` object in JavaScript.

I hope this helps! Let me know if you have any questions or need further assistance.
