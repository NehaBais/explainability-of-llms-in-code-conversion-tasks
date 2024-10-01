const fs = require("fs").promises;

async function createDirectory(path, mode) {
  try {
    await fs.mkdir(path, { recursive: true });
  } catch (err) {
    if (err.code !== "EEXIST") throw err;
  }
}

createDirectory("./path/to/dir", 0o770);
