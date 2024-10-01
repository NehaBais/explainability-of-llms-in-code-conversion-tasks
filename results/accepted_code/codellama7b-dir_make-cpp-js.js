const fs = require("fs");

function mkdirp(path) {
  if (fs.existsSync(path)) {
    return 0;
  }
  try {
    fs.mkdirSync(path);
    return 0;
  } catch (err) {
    console.log(`couldn't create directory: ${path}`);
    return -1;
  }
}
