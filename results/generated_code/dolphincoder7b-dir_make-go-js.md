In JavaScript, you can use the `mkdir` function from Node.js's `fs` module to create directories and any missing parents, like `mkdir -p`:
```javascript
const fs = require('fs');
function mkdirs(path) {
  if (!fs.existsSync(path)) {
    const parentDir = path.substring(0, path.lastIndexOf('/'));
    mkdirs(parentDir);
    fs.mkdirSync(path);
  }
}
```
In this function, `fs.existsSync` checks if the directory exists and `fs.mkdirSync` creates it. The `path.substring` method is used to extract the parent directory from the path provided. Note that JavaScript doesn't have a direct equivalent of Golang's `os.MkdirAll`. This function works on a single path, which means it may not work for creating multiple directories at once. If you need to create more than one directory at once, consider using libraries such as [mkdirp](https://www.npmjs.com/package/mkdirp) or [fs-extra](https://www.npmjs.com/package/fs-extra). They provide similar functions to Node's `fs` module but with additional features.
