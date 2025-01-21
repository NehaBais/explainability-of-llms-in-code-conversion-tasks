const fs = require("fs");
const path = require("path");

function mkdirp(path) {
  try {
    fs.promises.mkdir(path, { recursive: true }).catch((err) => {
      if (err.code !== "EEXIST") {
        console.error(`Error creating directory ${path}:`, err);
      }
    });
  } catch (err) {
    console.error(err);
  }
}

// Example usage:
mkdirp("./path/to/dir");
