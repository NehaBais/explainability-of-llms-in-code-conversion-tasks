public static String str_fromstr(String s, String in, int m) {
    int index = s.indexOf(in); // correct variable to use is "in" instead of "In"
    return substring(s, index, m);
}