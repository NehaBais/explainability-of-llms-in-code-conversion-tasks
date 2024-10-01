const fs = require("fs");
const path = require("path");

function mkdirp(dirPath) {
  const dirname = path.dirname(dirPath);

  if (!fs.existsSync(dirname)) {
    mkdirp(dirname);
  }

  if (!fs.existsSync(dirPath)) {
    fs.mkdirSync(dirPath, { recursive: true });
  }
}

// Example usage:
mkdirp("/tmp/some/path/to/dir");
