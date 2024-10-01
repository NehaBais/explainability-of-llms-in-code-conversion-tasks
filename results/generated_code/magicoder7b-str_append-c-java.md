 Below is the equivalent Java code for your C program:

```Java
public class Main {
    public static void main(String[] args) {
        String str = "Good Morning";
        String cstr = " to all";
        String cstr2 = " !!!";
        
        // Concatenate the strings in a safe way by using the StringBuilder class.
        if (str != null && cstr != null && cstr2 != null) {
            str += cstr;
            str += cstr2;
            
            System.out.println(str);
        }
    }
}
```
In Java, to concatenate strings safely and efficiently, the `StringBuilder` class is recommended instead of using string concatenation with `+`. The above code uses `+=`, which creates a new `StringBuilder` object every time it’s used, and then appends all the necessary characters into it.
