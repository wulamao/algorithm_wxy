1. 可变参数实现
2. debug工具
    - logger
    - calc_time
    - check_mem
3. 工程组织与编译
    - automake
4. 单元测试
    - check
>   ├── include
    │   ├── sub.h
    │   └── unit_test.h
    ├── makefile
    ├── sub
    │   └── sub.c
    └── unit_test
        ├── test_main.c
        └── test_sub.c






Tips：

- 打开断言
    #undef NDEBUG
    #include<assert.h>

- 关闭断言要写成
    #define NDEBUG
    #include<assert.h>

