const fs = require("fs");
const path = require("path");

const FILE_NAME = "output.txt";
const DIR_NAME = "docs";

function main() {
  create(".")
    .and(create("/"))
    .catch((err) => errorHandler(err, 1));
}

function create(root) {
  const filePath = path.join(root, FILE_NAME);
  const dirPath = path.join(root, DIR_NAME);
  return new Promise((resolve, reject) => {
    fs.mkdir(dirPath, { recursive: true }, (err) => {
      if (err) return reject(err);
      fs.writeFile(filePath, "", (err) => {
        if (err) return reject(err);
        resolve(filePath);
      });
    });
  });
}

function errorHandler(error, code) {
  console.error(`Error: ${error}`);
  process.exit(code);
}

main();
