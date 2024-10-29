The JavaScript does not have a built-in function to rename files/directories like Java's `file.renameTo()`. Instead, we use the NodeJS `fs` module in combination with `rename()` method provided by it to achieve this functionality. Also note that the file separator is different between platforms ("/" on Unix-based and "\" on Windows), so a helper function has been created below for platform independent path joining.

Here's how you can convert your Java code into JavaScript:
```javascript
const fs = require('fs');
const path = require('path');

function renameFile(oldPath, newPath) {
  return new Promise((resolve, reject) => {
    fs.rename(oldPath, newPath, (err) => {
      if (err) reject(err);
      else resolve();
    });
  });
}

async function test(type, oldName, newName) {
  try {
    await renameFile(oldName, newName);
    console.log(`The following ${type} called ${oldName} was renamed as ${newName}.`);
  } catch (err) {
    console.error(`Failed to rename the following ${type} called ${oldName}: ${err}`);
  }
}

async function main() {
  await test("file", "input.txt", "output.txt");
  await test("directory", path.join("docs"), path.join("mydocs"));
}
main();
```
Make sure to run this script with NodeJS as it requires the `fs` and `path` modules which are not available in a browser's JavaScript context. Also, make sure you have sufficient permissions for renaming files/directories on your system.

