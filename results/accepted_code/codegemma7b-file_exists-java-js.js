// Current working directory
const inputFile = `${process.cwd()}/docs/input.txt`;
const inputExists = fs.existsSync(inputFile);

// Filesystem root
const rootInputFile = `/docs/input.txt`;
const rootInputExists = fs.existsSync(rootInputFile);

console.log(`Input file exists in current directory: ${inputExists}`);
console.log(`Input file exists in root directory: ${rootInputExists}`);
