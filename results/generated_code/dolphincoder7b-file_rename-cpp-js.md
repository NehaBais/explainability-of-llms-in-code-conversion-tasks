The JavaScript version of the given C++ code is as follows:

```javascript
const fs = require("fs");

try {
    fs.renameSync("input.txt", "output.txt");
    fs.renameSync("docs", "mydocs");
    fs.renameSync("/input.txt", "/output.txt");
    fs.renameSync("/docs", "/mydocs");
} catch (err) {
    console.error(err);
}
```

Please note that this code only renames the files and directories in the current directory, not across all of your filesystem. If you want to rename files and directories across the entire filesystem, you'll need to utilize a module like `fs-extra` or manually write a recursive function.
