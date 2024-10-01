const fs = require("fs");

function createDirectory(path) {
  if (fs.existsSync(path)) {
    return;
  }

  fs.mkdirSync(path, { recursive: true });
}

createDirectory("./path/to/dir");
