from ctypes import  *
import string
import re
def main():
    str = create_string_buffer(b'my String')
    cstr = create_string_buffer(b'Changed  ')
    dup = create_string_buffer()
    temp = str.value
    sprintf(str,  "%s%s", cstr,  (dup.value  = temp))
    free(dup)
    print(str.value.decode())

if __name__ == "__main__":
    main()