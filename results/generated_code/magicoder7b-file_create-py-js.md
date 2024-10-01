 In JavaScript, you can use the `fs` module from the NodeJS environment to achieve this. Here is your Python code translated into Javascript:

```javascript
const fs = require('fs');
const path = require('path');

function create(directory) {
  const outputPath = path.join(directory, "output.txt");
  fs.writeFileSync(outputPath, ''); // Create an empty file
  fs.mkdirSync(path.join(directory, "docs")); // Create an empty directory
}

create('.'); // Current directory
create('/'); // Root directory
```

Please note that in JavaScript, we don't have with statement like Python, so the code is written to create a file and make a directory synchronously. Also note that NodeJS is needed for running this script which is a server-side JavaScript environment used for building more advanced applications as it provides various utilities for interacting with files and directories.
Please install NodeJS if not already installed in your system, then run the script from command line like `node filename.js` to execute it.
