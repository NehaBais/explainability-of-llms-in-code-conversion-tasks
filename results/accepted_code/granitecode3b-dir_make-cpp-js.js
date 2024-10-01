const fs = require("fs");
const path = require("path");
function mkdirp(dirname) {
  try {
    fs.mkdirSync(dirname, { recursive: true });
  } catch (err) {
    if (err.code !== "EEXIST") {
      throw err;
    }
  }
}
if (process.argv.length < 3) {
  console.error("Usage: mkdirp <path>");
  process.exit(1);
}
const dirPath = path.resolve(process.argv[2]);
mkdirp(dirPath);
