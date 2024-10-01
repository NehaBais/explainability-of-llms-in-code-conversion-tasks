const path = require("path");
const fs = require("fs").promises;

async function mkdirp(dir) {
  dir = path.resolve(dir);

  if (await fs.exists(dir)) {
    return;
  }

  try {
    await fs.mkdir(dir, { recursive: true });
  } catch (err) {
    console.error(`Couldn't create directory '${dir}':`, err);
    throw err;
  }
}

const dir = "./path/to/directory";

(async () => {
  try {
    await mkdirp(dir);
    console.log("Directory created successfully");
  } catch (err) {
    console.error(`Error creating directory '${dir}':`, err);
  }
})();
