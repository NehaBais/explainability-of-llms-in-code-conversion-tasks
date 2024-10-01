Sure, here is the equivalent Java code for the given C program:

```java
public class Main {
    public static void main(String[] args) {
        char str[] = new char[24];
        str = "Good Morning".toCharArray();
        char [] cstr = " to all".toCharArray();
        char [] cstr2 = " !!!".toCharArray();
        int x=0;

        if(str.length+cstr.length+cstr2.length<=str.length) {
            /* 1st method*/
            for (char c : str)
                System.out.print(c);
            for (char c : cstr)
                System.out.print(c);
            for (char c : cstr2)
                System.out.print(c);
            System.out.println();
        }
    }
}
```
This Java code does exactly the same thing as your C program - it appends a string to another string and prints the result in console. 
In this case, however, we are using StringBuilder class in java which is more efficient than using char arrays for append operations.
