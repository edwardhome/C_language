# 簡述gcc編譯過程

預處理環節，將所以gcc需要處理的東西全數展開

```bash
gcc -E hello.c -o hello.i
```

編譯Compilation

```bash
gcc -S hello.i -o hello.s
```
此時為組合語言

組譯Assemble
```bash
gcc -c hello.s -o hello.o
```
此時語言已經轉為二進位檔，無法以人類閱讀了

最後將二進位檔轉為執行檔
```bash
gcc hello.o -o hello
```
