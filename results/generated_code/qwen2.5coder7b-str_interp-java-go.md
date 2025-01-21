In Golang, you can use the `fmt.Sprintf()` function to do string interpolation. Here is how you might convert your Java code to Go:

```go
adjective := "little"
lyric := fmt.Sprintf("Mary had a %s lamb", adjective)
```

The `%s` in the format string tells Go that it should replace this with a string, which is `adjective`. The result of `fmt.Sprintf()` is then assigned to `lyric`, giving you your interpolated string.
