const fs = require("fs");
const path = require("path");

async function mkdirp(dirPath) {
  // Ensure directory exists, create if not
  try {
    await fs.promises.mkdir(dirPath, { recursive: true });
  } catch (err) {
    if (err.code !== "EEXIST") throw err;
  }
}

(async () => {
  await mkdirp("./path/to/dir");
})();
