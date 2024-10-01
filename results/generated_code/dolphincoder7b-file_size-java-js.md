This is a JavaScript version of the given Java code:

```JavaScript
const fs = require('fs');

let fileA = new File("file.txt");
console.log(fileA.length() + " B");
let fileB = new File("/file.txt");
console.log(fileB.length() + " B");
```
Please note that JavaScript does not have a built-in file system and thus, the above code is using `fs` module from Node.js, which you should install separately. 

Also note that in JavaScript `File` is a class, not a function like it is in Java. Therefore, you can't create instance of File class directly as you did in Java. You need to use the `fs.createReadStream()` or `fs.openSync()` functions.

So the final JavaScript code will look something like this:

const fs = require('fs');
let fileA = fs.openSync("file.txt");
console.log(fileA.length + " B");
let fileB = fs.openSync("/file.txt");
console.log(fileB.length + " B");

