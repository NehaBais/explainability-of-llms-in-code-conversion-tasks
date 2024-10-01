Sure, here's the equivalent JavaScript code:
```
const fs = require('fs');
const path = require('path');
// Create output.txt in the current working directory
fs.openSync(path.join(__dirname, 'output.txt'), 'w');
// Create docs directory in the filesystem root
fs.mkdirSync('/docs', { mode: 0o750 });
```
Note that I'm using `require('fs')` and `require('path')` to access the file system functions, and I'm using octal (base-8) numbers for the permissions. The `0o` prefix is used to indicate an octal number literal. You can also use the decimal equivalents, such as `0640` for the file mode.

