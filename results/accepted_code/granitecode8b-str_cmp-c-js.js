const STREQ = (a, b) => {
  return a === b;
};
const STRNE = (a, b) => {
  return a !== b;
};
const STRLT = (a, b) => {
  return a < b;
};
const STRLE = (a, b) => {
  return a <= b;
};
const STRGT = (a, b) => {
  return a > b;
};
const STRGE = (a, b) => {
  return a >= b;
};
const STRCEQ = (a, b) => {
  return a.toLowerCase() === b.toLowerCase();
};
const STRCNE = (a, b) => {
  return a.toLowerCase() !== b.toLowerCase();
};
const STRCLT = (a, b) => {
  return a.toLowerCase() < b.toLowerCase();
};
const STRCLE = (a, b) => {
  return a.toLowerCase() <= b.toLowerCase();
};
const STRCGT = (a, b) => {
  return a.toLowerCase() > b.toLowerCase();
};
const STRCGE = (a, b) => {
  return a.toLowerCase() >= b.toLowerCase();
};
function compare(a, b) {
  console.log(
    `${a}${" ".repeat(2)}${STREQ(a, b) ? 1 : 0}, ${STRNE(a, b) ? 1 : 0}, ${STRGT(a, b) ? 1 : 0}, ${STRLT(a, b) ? 1 : 0}, ${STRGE(a, b) ? 1 : 0}, ${STRLE(a, b) ? 1 : 0}  ${b}`,
  );
}
function comparecase(a, b) {
  console.log(
    `${a}${" ".repeat(2)}${STRCEQ(a, b) ? 1 : 0}, ${STRCNE(a, b) ? 1 : 0}, ${STRCGT(a, b) ? 1 : 0}, ${STRCLT(a, b) ? 1 : 0}, ${STRCGE(a, b) ? 1 : 0}, ${STRCLE(a, b) ? 1 : 0}  ${b} ignoring case`,
  );
}
const args = process.argv;
for (let i = 2; i < args.length; i += 2) {
  compare(args[i], args[i + 1]);
  comparecase(args[i], args[i + 1]);
}
