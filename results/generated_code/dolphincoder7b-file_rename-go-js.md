In JavaScript, the `os` module is not available directly for renaming or moving files and directories. However, with Node.js, there are multiple modules that can assist in this task. One such module is `fs-extra`. Here's how you can use it to rename a file in both current working directory (CWD) and filesystem root:
```javascript
const fs = require('fs-extra');
// Rename "input.txt" into "output.txt" in CWD
fs.renameSync('./input.txt', './output.txt');
// Rename "docs" into "mydocs" in CWD
fs.renameSync('./docs', './mydocs');
// Same as above, but with filesystem root
fs.renameSync('/input.txt', '/output.txt');
fs.renameSync('/docs', '/mydocs');
```
Please note that `renameSync` replaces any existing files or directories with the new name and overwrites any content of the destination. If you want to prevent this, you can use the `replace` option:

const fs = require('fs-extra');
// Prevents overwriting "input.txt"
fs.renameSync('./input.txt', './output.txt', { replace: false });

If you need to rename a directory, you will have to use `fs.copy()` followed by `fs.remove()`:

const fs = require('fs-extra');
// Rename "docs" into "mydocs" in CWD
fs.renameSync('./docs', './mydocs');
// Copy and delete "docs"
fs.copySync('./docs', './mydocs')
  .then(() => {
    fs.removeSync('./docs');
  });

Note that `fs-extra` supports both promises (`fs.promises`) and callbacks (`fs`). If you prefer using callbacks, you can use the following code instead:

const fs = require('fs');
// Rename "docs" into "mydocs" in CWD
fs.rename('./docs', './mydocs', err => {
  if (err) throw err;
  // Copy and delete "docs"
  fs.copy('./docs', './mydocs', (err, data) => {
    if (err) throw err;
    fs.remove('./docs', err => {
      if (err) throw err;
    });
  });
});
