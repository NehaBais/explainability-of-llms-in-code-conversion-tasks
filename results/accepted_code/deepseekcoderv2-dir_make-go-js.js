const fs = require("fs");
const path = require("path");

function mkdirp(dir) {
  if (!fs.existsSync(dir)) {
    const dirPath = path.dirname(dir);
    mkdirp(dirPath);
    fs.mkdirSync(dir, { mode: 0o770 });
  }
}

// Example usage:
const dirPath = "/tmp/some/path/to/dir";
mkdirp(dirPath);
