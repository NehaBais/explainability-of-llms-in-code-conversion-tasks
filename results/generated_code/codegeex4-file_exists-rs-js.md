Here's how you can convert the given Rust code to JavaScript using Node.js. Note that in JavaScript, we will use the 'fs' module's methods to check for files and directories.

```javascript
const fs = require('fs');

function verifyFilesAndDirectories() {
  const pathsToCheck = ["input.txt", "docs", "/input.txt", "/docs"];

  pathsToCheck.forEach((path) => {
    try {
      const stats = fs.statSync(path);
      if (stats.isDirectory()) {
        console.log(`${path} is a directory`);
      } else {
        console.log(`${path} is a file`);
      }
    } catch (err) {
      console.log(`${path} does not exist`);
    }
  });
}

verifyFilesAndDirectories();
```

Please note the following differences:
- In JavaScript, we use 'fs.statSync(path)' to get metadata of a file or directory. 
- If file does not exist, it throws an exception which we can catch using try-catch blocks.
- We don't have to iterate over each path like in Rust as we can pass an array of paths directly to the forEach loop.
