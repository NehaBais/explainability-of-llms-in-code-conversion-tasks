Here's the JavaScript code that does the same thing as the given C code:
```javascript
const fs = require('fs');
const path = require('path');
const { stat } = fs.promises;
async function getFileSize(filePath) {
  try {
    const stats = await stat(filePath);
    return stats.size;
  } catch (error) {
    console.error(`Error getting file size for ${filePath}: ${error.message}`);
    return -1;
  }
}
const cwd = process.cwd();
const root = '/';
async function main() {
  const inputFile = path.join(cwd, 'input.txt');
  const inputFileSize = await getFileSize(inputFile);
  console.log(`File size for ${inputFile}: ${inputFileSize}`);
  
  const rootInputFile = path.join(root, 'input.txt');
  const rootInputFileSize = await getFileSize(rootInputFile);
  console.log(`File size for ${rootInputFile}: ${rootInputFileSize}`);
}
main();
```
This code uses the `fs` module to read the file sizes and `path` module to create file paths. It also uses `stat` method from the `fs.promises` object to get the file size asynchronously. The `main` function gets the current working directory using `process.cwd()` and creates a file path for `input.txt` in it. Then, it calls the `getFileSize` function to get the file size of `input.txt`. It also creates a file path for `input.txt` in the root directory and calls `getFileSize` again to get the file size there. Finally, it prints out the file sizes for both files using `console.log`.

