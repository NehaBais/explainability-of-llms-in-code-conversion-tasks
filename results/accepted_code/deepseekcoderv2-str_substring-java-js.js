function substring(str, n, m) {
  if (m !== undefined) {
    return str.substring(n, n + m);
  } else if (m === undefined && typeof n === "string") {
    // Special case for the last character removed version
    const index = str.indexOf(n);
    return str.substring(0, index !== -1 ? index : str.length - 1);
  } else {
    // Default to starting from n characters in and of m length if only one argument is provided
    return str.substring(n, n + (m || undefined));
  }
}

function substringChar(str, c, m) {
  const index = str.indexOf(c);
  if (index !== -1) {
    return str.substring(index, index + m);
  } else {
    throw new Error("Character not found in the string.");
  }
}

function substringSubstr(str, sub, m) {
  const index = str.indexOf(sub);
  if (index !== -1) {
    return str.substring(index, index + m);
  } else {
    throw new Error("Substring not found in the string.");
  }
}
