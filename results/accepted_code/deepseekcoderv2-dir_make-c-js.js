const fs = require("fs");
const path = require("path");

function mkdirp(dirPath) {
  if (!fs.existsSync(dirPath)) {
    const parentDir = path.dirname(dirPath);
    if (parentDir !== dirPath) {
      mkdirp(parentDir);
    }
    fs.mkdirSync(dirPath, { recursive: true });
  } else {
    const stats = fs.statSync(dirPath);
    if (!stats.isDirectory()) {
      throw new Error(`${dirPath} exists but is not a directory`);
    }
  }
}

if (process.argv.length !== 3) {
  console.error("Usage: node script.js <path>");
  process.exit(1);
}

const dirPath = process.argv[2];
mkdirp(dirPath);
