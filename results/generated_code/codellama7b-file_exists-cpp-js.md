Sure! Here's the converted code in JavaScript:
```scss
const fs = require('fs');

function fileExists(path) {
  if (fs.existsSync(path)) {
    if (fs.lstatSync(path).isDirectory()) {
      console.log(`${path} is a directory`);
    } else {
      console.log(`${path} exists with a file size of ${fs.lstatSync(path).size} bytes.`);
    }
  } else {
    console.log(`${path} does not exist`);
  }
}

function main() {
  const inputPath = 'input.txt';
  const zeroLengthPath = 'zero_length.txt';
  const docsInputPath = 'docs/input.txt';
  const docsZeroLengthPath = 'docs/zero_length.txt';
  
  fileExists(inputPath);
  fileExists(zeroLengthPath);
  fileExists(docsInputPath);
  fileExists(docsZeroLengthPath);
}
```
Note that this code uses the `fs` module to interact with the file system, and it uses the `existsSync` method to check if a file or directory exists. The `lstatSync` method is used to get information about the file or directory, such as its size.

Also note that the function `fileExists` takes a path as an argument and returns nothing (i.e., it does not return anything). Instead, it uses console.log() to output the result of the check to the console. This is because in JavaScript, the main purpose of functions is to perform actions or compute values, rather than simply printing text to the console.
