const fs = require("fs").promises;
const err = "File move error";

async function renameFiles() {
  try {
    await fs.rename("input.txt", "output.txt");
    await fs.rename("docs", "mydocs");
    await fs.rename("/input.txt", "/output.txt");
    await fs.rename("/docs", "/mydocs");
  } catch (e) {
    console.error(err, e);
  }
}

renameFiles();
