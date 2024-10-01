const fs = require("fs").promises; // for async/await

async function createDirectory(path) {
  try {
    await fs.mkdir(path, { recursive: true });
  } catch (err) {
    if (err.code !== "EEXIST") throw err;
  }
}

// usage example:
createDirectory("./path/to/dir")
  .then(() => console.log("Directory created successfully"))
  .catch((err) => console.error("An error occurred:", err));
