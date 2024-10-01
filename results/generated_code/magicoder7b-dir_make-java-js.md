 You can achieve this in JavaScript using the `fs` module. Here is how you could implement it:

```javascript
const fs = require('fs');
const path = require('path');

function createDir(dirPath) {
  const fullPath = path.resolve(__dirname, dirPath); // resolve relative paths to absolute
  
  try {
    fs.mkdirSync(fullPath, { recursive: true });
    console.log(`Directory ${fullPath} successfully created`);
  } catch (err) {
    if (err.code !== 'EEXIST') throw err; // ignore the error if directory already exists
    console.log('Directory already exists');
  }
}

createDir("./path/to/dir");
```
In this code, we use `fs.mkdirSync()` to create the directory and specify the `{ recursive: true }` option so that it will also create any parent directories as necessary. If the directory or a parent directory already exists, it won't throw an error and instead, it will print 'Directory already exists'. 
If there is some other issue while creating the directory (like permission denied), it will throw the error which can be handled accordingly.
