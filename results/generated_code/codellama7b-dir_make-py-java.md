 Here is the equivalent Java code for the given Python code: 
```java
public static void mkdirp(String path) {
      File dir = new File(path);
      if (!dir.exists()) {
          dir.mkdirs();
      }
}
```
