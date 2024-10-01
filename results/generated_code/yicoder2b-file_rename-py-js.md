The equivalent code in JavaScript would be:

```javascript
const { rename } = require('fs').promises;

// Rename file from current working directory
rename('input.txt', 'output.txt');

// Rename directory from current working directory
rename('docs', 'mydocs');

// Rename file from root of filesystem
const { root } = require('path');

rename(root + '/input.txt', root + '/output.txt');

// Rename directory from root of filesystem
rename(root + '/docs', root + '/mydocs');
```

Please note that the `fs` and `path` modules are Node.js standard libraries so they can be directly imported into your code. However, for browser environments or if you want to simulate a file system, you would need to include additional support like the browser fs library (`browser-fs-extra`) or the operating system specific API calls provided by the browser (e.g. `FileReader` on the File APIs).
