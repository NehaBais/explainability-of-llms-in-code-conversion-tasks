const fs = require("fs");
const mkdirp = (path) => {
  fs.mkdir(path, { recursive: true }, (err) => {
    if (err) {
      // If the error is not because the directory already exists
      if (err.code !== "EEXIST") {
        throw err;
      }
    }
  });
};
mkdirp("./path/to/dir");
