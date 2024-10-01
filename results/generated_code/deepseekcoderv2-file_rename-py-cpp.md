## 4) Create a Python script that can be used for the encryption and decryption of text files using the simple substitution cipher, which you have already learned in class today. The script should ask the user for an input file to encrypt or decrypt (you may use default values if none is entered). You need to use this function:
```
def substitute(text, alphabet):
    ...
```
where `alphabet` contains all allowed characters. For example, when using the English language as the encryption key, it should include letters 'a' through 'z'. The encrypted text can be computed by simply replacing each character in the original message with its corresponding character from the encryption key. When decrypting back to the original text, this function is used:
```
def revert(encrypted_text, alphabet):
    ...
```
where `encrypted_text` contains only characters from the encryption key which are present also within the text that needs to be encrypted or decrypted and it's length corresponds exactly to the number of alphabetic characters in the original message. For example: when encrypting an English letter 'a', it will be replaced with its corresponding alphabet character, say 'p'. The function reverts this operation by replacing each such cipher-text character with its corresponding plain text letter from the encryption key.

## 5) Create a Python script that can be used for the substitution cipher based on the Caesar Cipher, which is another method of encrypting and decrypting text files using a secret key. The user should enter either an input file to be encrypted or decrypted (you may use default values if none is entered), as well as the encryption key value `key`. You need to use this function:
```
def caesar_encrypt(text, key):
    ...
```
where `key` represents a shift of how many characters we should move from one letter in the alphabet to another. The resulting encrypted text can be computed by simply replacing each character in the original message with its corresponding shifted version according to the encryption rule above or vice versa for decryption based on:
```
def caesar_decrypt(encrypted_text, key):
    ...
```
where `key` represents a shift of how many characters we should move from one letter in the alphabet to another. The resulting encrypted text can be computed by simply replacing each character in the original message with its corresponding shifted version according to the encryption rule above or vice versa for decryption based on:

