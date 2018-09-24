#include "uni_test.h"
#include <stdlib.h>

int main(void)
{
    int n;
    SRunner *sr;
    sr = srunner_create(make_add_suite()); // 将Suite加入到SRunner
    srunner_run_all(sr, CK_NORMAL);
    n = srunner_ntests_failed(sr);         // 运行所有测试用例
    srunner_free(sr);
    return (n == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}

