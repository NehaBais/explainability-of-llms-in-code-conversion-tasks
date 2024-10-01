
Here's the equivalent code in JavaScript:
```
const fs = require('fs');

function printStat(p) {
  try {
    const stat = fs.statSync(p);
    if (stat.isDirectory()) {
      console.log(`${p} is a directory`);
    } else {
      console.log(`${p} is a file`);
    }
  } catch (err) {
    console.error(err);
  }
}

printStat('input.txt');
printStat('/input.txt');
printStat('docs');
printStat('/docs');
```
The `fs` module in Node.js provides an API for interacting with the file system. The `statSync()` method is used to get information about a file or directory, and it returns an object containing various properties of the file/directory. In this case, we use `statSync()` to get information about the file/directory at the specified path, and then check if it's a directory using the `isDirectory()` method. If it is, we log a message indicating that it's a directory. Otherwise, we log a message indicating that it's a file.

The code also includes two calls to `printStat()` with different paths: one for a file and directory in the current working directory, and one for a file and directory in the filesystem root. The paths are specified as strings, and they are passed to the `printStat()` function as arguments.
