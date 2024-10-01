const fs = require("fs");
const path = require("path");

function mkdirRecursive(dir) {
  const stat = fs.statSync(dir);
  if (stat && !stat.isDirectory()) {
    throw new Error(`${dir} is not a directory`);
  }

  const parentDir = path.dirname(dir);
  if (!fs.existsSync(parentDir)) {
    mkdirRecursive(parentDir);
  }

  fs.mkdirSync(dir, { recursive: true });
}
