function startsWith(container, target) {
  var clen = container.length,
    tlen = target.length;

  if (clen < tlen) return false;

  for (var i = 0; i <= clen - tlen; i++) {
    if (container.substr(i, tlen) == target) return true;
  }
  return false;
}

function endsWith(container, target) {
  var clen = container.length,
    tlen = target.length;

  if (clen < tlen) return false;

  for (var i = 0; i <= clen - tlen; i++) {
    if (container.substring(i, tlen).toLowerCase() == target.toLowerCase())
      return true;
  }
  return false;
}

function doesContain(container, target) {
  var result = container.includes(target);
  if (result) return true;

  return false;
}

console.log("Starts with Test ( Hello,Hell ) : " + startsWith("Hello", "Hell"));
console.log("Ends with Test ( Code,ode ) : " + endsWith("Code", "ode"));
console.log("Contains Test ( Google,msn ) : " + doesContain("Google", "msn"));
