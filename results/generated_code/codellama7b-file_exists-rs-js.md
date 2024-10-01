In JavaScript, you can use the `fs` module to check if a file or directory exists. Here's an example of how you could implement this in JavaScript:
```
const fs = require('fs');

function main() {
  const filesAndDirectories = ["input.txt", "docs", "/input.txt", "/docs"];

  for (const fileOrDirectory of filesAndDirectories) {
    try {
      const stats = fs.statSync(fileOrDirectory);
      if (stats.isFile()) {
        console.log(`${fileOrDirectory} is a file`);
      } else if (stats.isDirectory()) {
        console.log(`${fileOrDirectory} is a directory`);
      } else {
        console.log(`${fileOrDirectory} does not exist`);
      }
    } catch (err) {
      console.error(`Error occurred: ${err}`);
    }
  }
}
```
Note that in JavaScript, you need to use `fs.statSync()` instead of `fs::metadata()`. Also, since JavaScript does not have a native way to check if a file or directory is a symbolic link, you will need to use the `fs.lstatSync()` method to check for symlinks.

Also note that in JavaScript, you can use `console.log()` instead of `println!` to print messages to the console.
