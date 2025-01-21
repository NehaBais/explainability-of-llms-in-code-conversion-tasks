const fs = require("fs");
const path = require("path");

function createDir(dirPath) {
  fs.mkdirSync(path.dirname(dirPath), { recursive: true });
}

createDir("./path/to/dir");
