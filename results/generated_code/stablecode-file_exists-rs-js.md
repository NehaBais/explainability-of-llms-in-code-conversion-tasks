Here's your Rust code converted to JavaScript:

```javascript
const fs = require('fs');

function checkIfExists(file) {
  return new Promise((resolve, reject) => {
    fs.stat(file, (err, stats) => {
      if (err) {
        reject(err);
      } else if (stats.isDirectory())) {
        console.log(`${file} is a directory`));
      } else {
        console.log(`${file} is a file`));
      }
    });
  })
}

async function main() {
  const files = [
    'input.txt',
    'docs',
    '/input.txt',
    '/docs',
  ];

  for (let i = 0; i < files.length; i++) {
    try {
        await checkIfExists(files[i]));
    } catch (error) {
        console.log(`${files[i]} does not exist`));
      }
    }
}

main();
```

This JavaScript code accomplishes the same goal as your original Rust code: it checks whether a file called `input.txt` and a directory called `docs` exist in both the current working directory and the root of the filesystem.

It does this by defining an array of possible filenames and directories to check, then using a loop to iterate over each filename/directory in the array. For each filename/directory, it uses the `fs.stat()` method to get file stats. If the file exists (i.e., if `fs.stat()` returns successfully without an error), the code checks whether the current item is a directory or a file by checking the `isDirectory()` method of the `stats` object returned by `fs.stat()`.

If the file does not exist, the code simply logs a message indicating that the file/directory does not exist.

I hope this helps! Let me know if you have any questions.
