JavaScript doesn't have a built-in method to create directories with missing parents, but it can be implemented using the `fs` module in Node.js, which is used for file system operations on server side JavaScript applications. Here's how you could achieve this:

```javascript
const fs = require('fs');
const dir = './path/to/dir';

function mkdirp(dir) {
  if (!fs.existsSync(dir)){
    fs.mkdirSync(dir,{recursive: true});
  }
}

mkdirp(dir);
```
In this code snippet, `mkdirSync()` creates a directory at the specified path and its parents if they do not already exist. If it is unable to create some of these parent directories (like permissions), then an error will be thrown. The method `existsSync()` checks whether or not the path exists by returning `true` if the folder or file exists, otherwise it returns `false`. 

This function should work cross-platform due to Node.js running on V8 JavaScript runtime from Google which supports all POSIX functions on platforms where they exist (like Linux, Mac OS X, and Windows). However, please note that this code will run in a server side environment with Node.js as it is not available client side browsers.

