const fs = require("fs");
const path = require("path");

function createDir(dirPath) {
  const fullPath = path.resolve(__dirname, dirPath); // resolve relative paths to absolute

  try {
    fs.mkdirSync(fullPath, { recursive: true });
    console.log(`Directory ${fullPath} successfully created`);
  } catch (err) {
    if (err.code !== "EEXIST") throw err; // ignore the error if directory already exists
    console.log("Directory already exists");
  }
}

createDir("./path/to/dir");
