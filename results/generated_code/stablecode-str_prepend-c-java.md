Here is the equivalent Java code for your C code:

```java
public class Main {

    public static void main(String[] args) {
        
        String str = "my String";
        String cstr = "Changed ";
        str = cstr + str;
        System.out.println(str);
    }
}
```
Please note that Java is a strictly typed language, unlike C where type checking is not done at compile time or run time. So in the above java code we do not need to free the memory allocated by `String` object because Java's garbage collector will automatically take care of it when there are no more references to this object (i.e., when this object becomes eligible for garbage collection))).
