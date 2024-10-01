Here is the JavaScript equivalent of your C code:

```javascript
const fs = require('fs');

let stats1;
try {
    stats1 = fs.statSync('input.txt');
} catch (err) {
    console.error(err);
}

if (stats1) {
    console.log(`Size of input.txt: ${stats1.size}}`);
}

let stats2;
try {
    stats2 = fs.statSync('/input.txt');
} catch (err) {
    console.error(err);
}

if (stats2) {
    console.log(`Size of /input.txt: ${stats2.size}}`);
}
```
This JavaScript code does the same as your C code: it verifies the size of two files: "input.txt" in the current working directory and "/input.txt" in the file system root.

Note that since Node.js version 10, using `fs.statSync()` can be a security risk if the path is not properly validated. To mitigate this issue, always validate the paths before passing them to `fs.statSync()`.
