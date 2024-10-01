 The JavaScript equivalent of the C code would be using Node.js built in modules `fs` and `path`. Here is how you might implement this:

```javascript
const fs = require('fs');
const path = require('path');

function createFileAndDirectory(directory) {
  try {
    // Create an empty file
    fs.openSync(`${directory}/output.txt`, 'w');
    console.log("Successfully created output.txt in " + directory);
  
    // Create a new directory
    fs.mkdirSync(path.join(directory, 'docs'), 0o750);
    console.log("Successfully created docs in " + directory);
  } catch (err) {
    console.error('Error: ', err);
  }
}

// Create directories here and filesystem root
createFileAndDirectory('.'); // for the current working directory
createFileAndDirectory(path.resolve('/')); // for the root of the file system
```
This script creates a new `output.txt` in the current directory, as well as a subdirectory named 'docs'. In both cases, it logs success if it manages to create these files and directories without any errors occurring. If an error does occur, it will be caught by the catch block and logged with the `console.error()` function.
