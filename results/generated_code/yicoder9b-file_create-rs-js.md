The equivalent JavaScript code would be as follows. Please note that due to JavaScript's asynchronous nature and Node.js's fs module we are using promises for creating the files and directories:

```javascript
const fs = require('fs').promises;

const FILE_NAME = 'output.txt';
const DIR_NAME = 'docs';

(async function createFilesAndDirs() {
  try {
    await Promise.all([create('.'), create('/')]);
  } catch (error) {
    console.error(`Error: ${error}`);
    process.exit(1);
  }
})();

async function create(root) {
  const fPath = `${root}/${FILE_NAME}`;
  const dPath = `${root}/${DIR_NAME}`;
  return Promise.all([fs.mkdir(dPath, {recursive: true}), fs.writeFile(fPath, '')]);
}
```
This code will also create the "output.txt" file and "docs" directory twice - first in the current working directory ('.') and then at the filesystem root ('/'). If any error occurs during this process, it will be logged to the console and the program will exit with a status of 1.
