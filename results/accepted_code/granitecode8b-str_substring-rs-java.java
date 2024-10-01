String s = "abc文字化けdef";
int n = 2;
int m = 3;

// Print 3 characters starting at index 2 (c文字)
System.out.println(s.substring(n, n + m));

// Print all characters starting at index 2 (c texto化けdef)
System.out.println(s.substring(n));

// Print all characters except the last (abc textoizecke)
System.out.println(new StringBuilder(s).reverse().toString().substring(1));

// Print 3 characters starting with 'b' (bc文)
int bpos = s.indexOf('b');
System.out.println(s.substring(bpos, bpos + m));

// Print 3 characters starting with "ce" (cede)
int epos = s.indexOf("ce");
System.out.println(s.substring(epos, epos + m));