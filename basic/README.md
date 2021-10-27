---
tags: C語言, 程式語言
---

# 基礎C語言筆記
本筆記主要記載個人學習C語言相關內容與筆記彙整。

## C語言程式主體
```c=
#include <stdio.h>

int main(void){
    //這是一隻什麼也不做的程式
    return 0;
}
```

其中`int` 說明函式最終會輸出一個整數
而`main`表示這是主要程式
`main(void)`中的`void`意思是該函式不接受輸入函數，以`void`表示空的意思。

## 資料型態
C語言主擁有下列以下型態

- 整數
    - short
    - int
    - long
    - long long
- 浮點數
    - float
    - double
    - long double
- 字元
    - char

`sizeof` 可針對資料型態計算佔用多少記憶體的函式。

```c=
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("型態\t\t大小（bytes）\n");
    printf("short\t\t%lu\n", sizeof(short));
    printf("int\t\t%lu\n", sizeof(int));
    printf("long\t\t%lu\n", sizeof(long));
    printf("float\t\t%lu\n", sizeof(float));
    printf("double\t\t%lu\n", sizeof(double));
    printf("long double\t%lu\n", sizeof(long double));
    printf("char\t\t%lu\n", sizeof(char));

    return 0;
}
```

可得到下列結果，其中 
1. `\n`為跳脫字元，意為換行`enter`
2. `\t`為跳脫字元，意為`tab`的意思
3. `%lu`為格式指定碼，便是`,`之後由`sizeof()`計算出來的數值

```c=
型態		大小（bytes）
short		2
int		4
long		8
float		4
double		8
long double	16
char		1
```