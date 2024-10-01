The equivalent JavaScript code for the given C++ code is:

```javascript
var fs = require('fs');

fs.renameSync('input.txt', 'output.txt');
fs.renameSync('docs', 'mydocs');

fs.renameSync('/input.txt', '/output.txt');
fs.renameSync('/docs', '/mydocs');

fs.renameSync('/input.txt', '/output.txt');
fs.renameSync('/docs', '/mydocs');
```

Please note that the above code snippets should be run using Node.js environment. The 'fs' module is used for filesystem operations in Node.js. If you are running on a browser with Web Workers or other environments where `fs` may not exist (like a simple command-line interface), those would need to be handled separately and might involve fetching the files as strings first.
