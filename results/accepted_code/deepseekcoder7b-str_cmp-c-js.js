function printComparison(str1, str2) {
    console.log(`${str1}: ` +
        `Equal = ${str1 === str2}, Not Equal = ${str1 !== str2}, ` + 
        `Greater than = ${str1 > str2}, Less than = ${str1 < str2}, `+  
        `Greater or equal = ${str1 >= str2}, Less or equal = ${str1 <= str2}`); 
}

function printComparisonCaseInsensitive(str1, str2) {
    console.log(`${str1}: (ignoring case) ` +
        `Equal = ${str1.toLowerCase() === str2.toLowerCase()}, Not Equal = ${str1.toLowerCase() !== str2.toLowerCase()}, ` + 
        `Greater than = ${str1.toLowerCase() > str2.toLowerCase()}, Less than = ${str1.toLowerCase() < str2.toLowerCase()}, `+  
        `Greater or equal = ${str1.toLowerCase() >= str2.toLowerCase()}, Less or equal = ${str1.toLowerCase() <= str2<｜begin▁of▁sentence｜>.toLowerCase()}`); 
}

printComparison('ball', 'bell'); // Exact equality and Inequality, Lexicographical comparison
printComparisonCaseInsensitive('ball', 'Bell'); // Case Insensitive exact equality and Inequality, Case insensitive lexicographical comparison
printComparison('YUP', 'YEP'); // Numeric strings comparison
printComparisonCaseInsensitive('YUP', 'yep'); // Case Insensitive numeric strings comparison