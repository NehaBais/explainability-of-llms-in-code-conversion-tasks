String str = "abcdefgh";
int n = 2;
int m = 3;

// starting from n characters in and of m length;
System.out.println(str.substring(n, n+m)); // => "cde"

// starting from n characters in, up to the end of the string;
System.out.println(str.substring(n));  // => "cdefgh"

// whole string minus last character;
if (str.length() > 0) {
    System.out.println(str.substring(0, str.length()-1)); // => "abcdefg"
} else {
    System.out.println("");
}

// starting from a known character within the string and of m length;
System.out.println(str.substring(n, n+m));  // => "cde"

// starting from a known substring within the string and of m length.
int idx = str.indexOf("bc");  
if (idx != -1 && idx + m <= str.length()) {
    System.out.println(str.substring(idx, idx+m));  // => "bcd"
} else if (idx == -1) {
    System.out.println("The substring not found");  
} else {
    System<｜begin▁of▁sentence｜>.out.println("End of string reached");<｜end▁of▁sentence｜><｜begin▁of▁sentence｜>    
}