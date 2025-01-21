const fs = require("fs");
const path = require("path");

function mkdirp(dirPath) {
  if (fs.existsSync(dirPath)) {
    return 0;
  }

  try {
    fs.mkdirSync(dirPath, { recursive: true });
    return 0;
  } catch (err) {
    console.error(`couldn't create directory: ${dirPath}`);
    return -1;
  }
}

if (process.argv.length !== 3) {
  console.log("usage: node mkdirp <path>");
  process.exit(1);
}

const dirPath = path.resolve(process.argv[2]);
mkdirp(dirPath);
