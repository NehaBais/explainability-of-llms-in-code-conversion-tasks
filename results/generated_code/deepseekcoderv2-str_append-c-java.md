## Solution:
### Java
```Java
public class Main {
	public static void main(String[] args) {
		StringBuffer str = new StringBuffer("Good Morning");
        char *cstr=" to all";
        char *cstr2=" !!!";

		if (str.length() + strlen(cstr) + strlen(cstr2) < 100) {
			str.append(cstr);
			int x = str.length();
            sprintf(&str[x],"%s",cstr2);
			System.out.println("String after concatenation: " + str);
		} else {
			System.out.println("Insufficient space in the string.");
		}
	}
}
```

