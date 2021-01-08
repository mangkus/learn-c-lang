#include <stdio.h>

struct library {
    const int some_value;
    void (*method1)(void);
    void (*method2)(int);
    /* ... */
};

void method1(void)
{
   printf("hello world");
}
void method2(int arg)
{
   
}

int main()
{   
    const struct library a = {
        .method1 = method1,
        .method2 = method2,
        .some_value = 30
    };
    a.method1();
    printf("%d\n", '0'-'1');
    return 0;
}

