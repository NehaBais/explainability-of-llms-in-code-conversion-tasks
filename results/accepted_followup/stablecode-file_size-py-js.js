const fs = require("fs");

async function getSize(filename) {
  try {
    const stats = await fs.promises.stat(filename);
    return stats.size;
  } catch (err) {
    console.error(err);
  }
}

getSize("input.txt").then((size) => {
  console.log(`Size of file 'input.txt': ${size} bytes`);
});
