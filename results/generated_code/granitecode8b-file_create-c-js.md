Here is the JavaScript code that achieves the same task as the C code:
```javascript
const fs = require('fs');
// Create an empty file called "output.txt" in the current working directory and in the filesystem root
fs.open('output.txt', 'w', 0o640, (err, fd) => {
 if (err) throw err;
 fs.close(fd, (err) => {
 if (err) throw err;
 });
});
fs.mkdir('docs', { mode: 0o750 }, (err) => {
 if (err) throw err;
});
```
Note that in JavaScript, the `open` and `mkdir` functions are asynchronous, so we need to provide a callback function to handle the results. The `mode` parameter for `mkdir` is specified in octal format, similar to the permissions in C.

