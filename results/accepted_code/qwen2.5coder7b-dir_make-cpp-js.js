const fs = require("fs");
const path = require("path");

function mkdirp(dirPath) {
  if (fs.existsSync(dirPath)) {
    return true;
  }

  const parentPath = path.dirname(dirPath);

  if (!fs.existsSync(parentPath)) {
    mkdirp(parentPath);
  }

  fs.mkdirSync(dirPath, { recursive: true });
}

if (process.argv.length !== 3) {
  console.log("usage: node mkdirp.js <path>");
  process.exit(-1);
}

const dirPath = process.argv[2];
mkdirp(dirPath);
