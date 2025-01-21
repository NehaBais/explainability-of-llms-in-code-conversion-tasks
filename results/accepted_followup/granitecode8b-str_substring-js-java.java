// Enable implicitly declared classes feature
--enable-preview
String str = "abcdefgh";
int n = 2;
int m = 3;
// * starting from n characters in and of m length;
String substr1 = str.substring(n, n + m); // => "cde"
// * starting from n characters in, up to the end of the string;
String substring2 = str.substring(n); // => "cdefgh"
// * whole string minus last character;
String substring3 = str.substring(0, str.length() - 1); // => "abcdefg"
// * starting from a known character within the string and of m length;
int index4 = str.indexOf('b');
String substr4 = str.substring(index4, index4 + m); // => "bcd"
// * starting from a known substring within the string and of m length. 
String substr5 = str.substring(str.indexOf("bc"), str.indexOf("bc") + m); // => "bcd"