const fs = require("fs");
const path = require("path");
const mkdirp = require("mkdirp");

function createDirAll(dirPath) {
  return new Promise((resolve, reject) => {
    // Normalize the path to resolve any '..' and make it absolute if necessary
    let normalizedPath = path.normalize(
      path.isAbsolute(dirPath) ? dirPath : path.join(process.cwd(), dirPath),
    );

    mkdirp(normalizedPath, (err) => {
      if (err) reject(new Error(`Failed to create directory: ${err}`));
      else resolve();
    });
  });
}

createDirAll("path/to/dir")
  .then(() => {
    console.log("Directory created successfully!");
  })
  .catch((error) => {
    console.log(error);
  });
