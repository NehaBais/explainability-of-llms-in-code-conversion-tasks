This is a basic JavaScript code to achieve the same functionality as above Golang code:
```javascript
const os = require('os');

function printFileSize(f) {
  try {
    const stat = fs.statSync(f);
    console.log(stat.size);
  } catch (err) {
    console.error(err);
  }
}

printFileSize("input.txt");
printFileSize("/input.txt");
```
Note: For JavaScript, `os` is a core module in Node.js and `fs` stands for file system which is used to perform operations on files.
The `fs.statSync()` function returns an object with various properties pertaining to the specified file. In this case, we're interested in retrieving the size property of that object.
