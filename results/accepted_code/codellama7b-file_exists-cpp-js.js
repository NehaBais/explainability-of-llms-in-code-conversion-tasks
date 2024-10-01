const fs = require("fs");

function fileExists(path) {
  if (fs.existsSync(path)) {
    if (fs.lstatSync(path).isDirectory()) {
      console.log(`${path} is a directory`);
    } else {
      console.log(
        `${path} exists with a file size of ${fs.lstatSync(path).size} bytes.`,
      );
    }
  } else {
    console.log(`${path} does not exist`);
  }
}

function main() {
  const inputPath = "input.txt";
  const zeroLengthPath = "zero_length.txt";
  const docsInputPath = "docs/input.txt";
  const docsZeroLengthPath = "docs/zero_length.txt";

  fileExists(inputPath);
  fileExists(zeroLengthPath);
  fileExists(docsInputPath);
  fileExists(docsZeroLengthPath);
}
