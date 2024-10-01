Here is the equivalent JavaScript code:

```javascript
const fs = require('fs');

function renameFiles() {
  try {
    fs.renameSync("input.txt", "output.txt");
    fs.renameSync("docs", "mydocs");
    fs.renameSync("/input.txt", "/output.txt");
    fs.renameSync("/docs", "/mydocs");
  } catch (err) {
    console.error(err);
  }
}

renameFiles();
```
Note that in Node.js, the `fs` module is used to work with the filesystem. The function `fs.renameSync()` is synchronous and it's a blocking operation. If you want to use asynchronous operations, you can replace `fs.renameSync` with `fs.rename()`.

Also, keep in mind that running these scripts might require administrator privileges due to permissions on your file system, especially when renaming files or directories located at the root level.
