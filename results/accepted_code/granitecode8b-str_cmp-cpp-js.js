function compareStrings(str1, str2) {
  let result = "";
  if (str1 === str2) {
    result += `${str1} and ${str2} are exactly equal.`;
  } else {
    result += `${str1} and ${str2} are not equal.`;
  }
  if (str1 !== str2) {
    result += `${str1} and ${str2} are not equal.`;
  } else {
    result += `${str1} and ${str2} are exactly equal.`;
  }
  if (str1 < str2) {
    result += `${str1} is lexically ordered before ${str2}.`;
  } else {
    result += `${str1} is not lexically ordered before ${str2}.`;
  }
  if (str1 > str2) {
    result += `${str1} is lexically ordered after ${str2}.`;
  } else {
    result += `${str1} is not lexically ordered after ${str2}.`;
  }
  return result;
}

function compareStringsInsensitive(str1, str2) {
  let str1Lower = str1.toLowerCase();
  let str2Lower = str2.toLowerCase();
  return compareStrings(str1Lower, str2Lower);
}

function compareNumericStrings(str1, str2) {
  let num1 = Number(str1);
  let num2 = Number(str2);
  return compareStrings(num1.toString(), num2.toString());
}
