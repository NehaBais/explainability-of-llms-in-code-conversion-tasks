Here is the equivalent code in JavaScript:

```javascript
const fs = require('fs');
const path = require('path');

function renameInDirectory(dir) {
  fs.renameSync(path.join(dir, 'input.txt'), path.join(dir, 'output.txt'));
  fs.renameSync(path.join(dir, 'docs'), path.join(dir, 'mydocs'));
}

renameInDirectory('./'); // here (in the current working directory)
renameInDirectory('/');  // in the filesystem root
```

Note: In JavaScript, we use `fs.renameSync()` instead of `fs::rename` to rename files. Also, we need to join the directory and file names using `path.join()`. The path separator is '/' on most platforms, but it's good practice to use `path.join()` to avoid issues on different operating systems. Also, JavaScript doesn't have a way to get the root of the filesystem in a cross-platform way like Rust does with `/`, so you need to specify `/` manually when renaming files at the filesystem root.
