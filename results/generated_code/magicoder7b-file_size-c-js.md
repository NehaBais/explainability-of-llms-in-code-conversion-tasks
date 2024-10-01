 In JavaScript, you can use the `fs` module to accomplish this:

```javascript
const fs = require('fs');

console.log(fs.statSync('input.txt').size);
console.log(fs.statSync('/input.txt').size);
```
The `fs.statSync()` function returns an object containing the file's mode and size in bytes. You can then access these properties directly, like so: `fs.statSync('input.txt').size`. This will return the size of the 'input.txt' file in the current working directory. Similarly, `fs.statSync('/input.txt').size` will return the size of a file called 'input.txt' located at the root level of your file system.

Note: Before running this JavaScript code, make sure to install Node.js and the fs module by writing `npm i --save fs`.
