# Мой printf

Моя реализация стандартной функции `printf` языка `C`.

### Поддерживаемые форматы

1) `%d` - вывод знакового целого числа
2) `%b` - вывод числа в двоичной записи
3) `%o` - вывод числа в восьмеричной записи
4) `%x` - вывод числа в шестнадцатеричной записи
5) `%c` - вывод символа
6) `%s` - вывод строки

> [!NOTE]
> При указании несуществующего формата выводится `!`

### Использование

Пример использования:
```C
    extern void my_printf();

    int main() {

    char string[] = "[test %s]";

    my_printf("hello world: \n\tpercent: %%\n\tbinary: %b\n\tdecimal: %d\n\toctal: %o\n\thexidecimal: %x\n\tstring: %s\n\tcharacter: %c\n",
                            12, -23, -10, 56, string, 'c');

    return 0;
}
```

 Исходный код функции `my_printf` [здесь](my_printf.s). Она соответствует формату `stdcall`.

