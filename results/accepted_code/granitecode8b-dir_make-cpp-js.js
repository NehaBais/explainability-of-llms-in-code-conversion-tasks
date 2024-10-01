const fs = require("fs");
function mkdirp(path) {
  if (fs.existsSync(path)) {
    return true;
  } else {
    try {
      fs.mkdirSync(path, { recursive: true });
      return true;
    } catch (err) {
      console.error(`Error creating directory at ${path}: ${err.message}`);
      return false;
    }
  }
}
mkdirp("./path/to/dir");
