In JavaScript, you can use the `fs` module's `mkdir` method to create directories. The `fs.mkdirSync` function has a synchronous version of `fs.mkdir`, which will block until the directory is created.

Here is how you could translate your Java code into JavaScript:

```JavaScript
const fs = require('fs');
const path = require('path');

function mkdirp(p) {
  const parts = p.split(path.sep);
  for (let i = 1; i <= parts.length; i++) {
    let dir = path.join(...parts.slice(0, i));
    if (!fs.existsSync(dir)){
      fs.mkdirSync(dir);
    }
  }
}

try {
  mkdirp('C:/parent/test');
  console.log("path successfully created");
} catch (e) {
  console.error(e);
}
```

In the above JavaScript code, `mkdirp` function will create a directory if it doesn't already exist. It does this by splitting the given path on each separator (`/`) and then creating directories for every part of the path that hasn't been created yet.

Please note:
- `fs.existsSync(dir)` is used to check whether a given directory exists.
- If the directory already exists, `fs.mkdirSync(dir)` will do nothing. This behavior matches the Java `mkdirs()` method.
- Error handling is done using try-catch blocks.
