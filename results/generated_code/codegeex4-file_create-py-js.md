In JavaScript, you can use the `fs` module to achieve similar tasks. Below is the equivalent code:

```javascript
const fs = require('fs');
const path = require('path');

function create(dir) {
    const outputFilePath = path.join(dir, "output.txt");
    fs.closeSync(fs.openSync(outputFilePath, 'w'));
    
    const docsPath = path.join(dir, "docs");
    fs.mkdirSync(docsPath);
}

create("."); // current directory
create("/"); // root directory
```

Please note that this script needs to be run in a Node.js environment. 

Also, please be aware that the ability to create files and directories at the root level ("/") might require certain permissions.
