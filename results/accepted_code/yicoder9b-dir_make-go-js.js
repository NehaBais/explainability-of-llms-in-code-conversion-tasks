const fs = require("fs-extra");

async function mkdirAll(path) {
  try {
    await fs.ensureDir(path); // Creates directory and any subdirectories if they don't exist
  } catch (err) {
    console.error(err);
  }
}

mkdirAll("./tmp/some/path/to/dir"); // This will create the directory if it doesn't already exist
