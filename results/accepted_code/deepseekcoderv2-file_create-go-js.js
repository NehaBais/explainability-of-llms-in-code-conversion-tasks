const fs = require("fs");
const path = require("path");

function createFile(fn) {
  const filePath = path.resolve(__dirname, fn);
  fs.writeFile(filePath, "", (err) => {
    if (err) {
      console.error(err);
      return;
    }
    console.log(`file ${filePath} created!`);
  });
}

function createDir(dn) {
  const dirPath = path.resolve(__dirname, dn);
  fs.mkdir(dirPath, (err) => {
    if (err) {
      console.error(err);
      return;
    }
    console.log(`directory ${dirPath} created!`);
  });
}

// Create file in the current working directory
createFile("input.txt");

// Create file in the filesystem root (assuming __dirname is the root for this example)
createFile("/input.txt");

// Create directory in the current working directory
createDir("docs");

// Create directory in the filesystem root (assuming __dirname is the root for this example)
createDir("/docs");
