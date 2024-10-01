const fs = require("fs");
const path = require("path");

function createFile(filePath) {
  try {
    fs.writeFileSync(filePath, "");
    console.log(`file ${filePath} created!`);
  } catch (err) {
    console.error(err);
  }
}

function createDir(dirPath) {
  try {
    if (!fs.existsSync(path.dirname(dirPath))) {
      fs.mkdirSync(path.dirname(dirPath));
    }
    fs.mkdirSync(dirPath);
    console.log(`directory ${dirPath} created!`);
  } catch (err) {
    console.error(err);
  }
}

createFile("input.txt");
createFile("/input.txt");
createDir("docs");
createDir("/docs");
