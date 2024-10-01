const fs = require("fs");
function mkdirp(path) {
  try {
    fs.mkdirSync(path, { recursive: true });
  } catch (err) {
    if (err.code !== "EEXIST") {
      throw err;
    }
  }
}
