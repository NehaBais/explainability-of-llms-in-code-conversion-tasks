const str = "Mary had a %s lamb";
const txt = "little";
const out = sprintf(str, txt);
console.log(out);

function sprintf(fmt, ...args) {
  return fmt.replace(/%s/g, () => args[0]);
}
