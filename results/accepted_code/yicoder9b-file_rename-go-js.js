const fs = require("fs").promises;
async function renameFiles() {
  await fs.rename("input.txt", "output.txt");
  await fs.rename("docs", "mydocs");
  await fs.rename("/input.txt", "/output.txt");
  await fs.rename("/docs", "/mydocs");
}
renameFiles().catch(console.error);
