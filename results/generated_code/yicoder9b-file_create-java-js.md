The equivalent code in JavaScript using the 'fs' module would look like this:

```javascript
const fs = require('fs').promises;

async function createFilesAndDirs() {
  try {
    await Promise.all([
      fs.writeFile('output.txt', ''),
      fs.writeFile(process.env.HOME + '/output.txt', ''), // For Unix-based systems (like Linux or macOS), you can use process.env.HOME for the root directory.
      fs.mkdir('docs'),
      fs.mkdir(process.env.HOME + '/docs'),  //For Unix-based systems create an empty directory 'docs' in home directory root.
    ]);
  } catch (error) {
    console.error(`Got an error trying to write to a file: ${error.message}`);
  }
}

createFilesAndDirs();
```

This code creates two files named "output.txt" and two directories named "docs". The first pair is created in the current directory, and the second pair are created in the root directory of the file system. Each pair has a 0-byte size.

Please note that this JavaScript version requires Node.js to run. Also, it writes empty files using `fs.writeFile()` rather than creating new files with `fs.mkdir()` because directories can't be created for an existing file in the file system.
