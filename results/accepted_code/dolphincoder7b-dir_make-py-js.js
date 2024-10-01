const fs = require("fs");

function mkdirp(path) {
  try {
    fs.mkdirSync(path);
  } catch (err) {
    // Ignore error if file exists or directory already exists
    if (err.code !== "ENOENT" && err.code !== "EEXIST") throw err;
  }
}

// Example usage:
mkdirp("./path/to/dir");
