const path = require("path");
const fs = require("fs");

function mkdirs(p) {
  p = path.resolve(p);
  if (!fs.existsSync(p)) {
    try {
      fs.mkdirSync(p, { recursive: true });
    } catch (err) {
      console.error(`Failed to create directory ${p}:`, err);
    }
  }
}

const p = "./path/to/dir";
mkdirs(p); // Creates the directory and any missing parents
console.log(`Directory ${p} has been created.`);
