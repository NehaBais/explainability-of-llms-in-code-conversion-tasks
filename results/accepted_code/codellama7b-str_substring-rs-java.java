String s = "abc文字化けdef";
int n = 2;
int m = 3;

// Print 3 characters starting at index n (c文字)
System.out.println(s.substring(n, n + m));

// Print all characters starting at index n (c文字化けdef)
System.out.println(s.substring(n));

// Print all characters except the last (abc文字化けde)
System.out.println(s.substring(0, s.length() - 1));

// Print 3 characters starting with 'b' (bc文)
int cpos = s.indexOf('b');
if (cpos != -1) {
    System.out.println(s.substring(cpos + m));
} else {
    System.out.println("Not found");
}

// Print 3 characters starting with "けd" (けde)
int spos = s.indexOf("けd");
if (spos != -1) {
    System.out.println(s.substring(spos + m));
} else {
    System.out.println("Not found");
}