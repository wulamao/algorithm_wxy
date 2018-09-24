#include "unit_test.h"
#include <stdlib.h>

int main(void)
{
    int n, n1;
    SRunner *sr, *sr1;
    sr = srunner_create(make_sub_suite());
    //将Suite加入到SRunner
    srunner_run_all(sr, CK_NORMAL);
    n = srunner_ntests_failed(sr);
    //运行所有测试用例
    srunner_free(sr);
    return (n == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}

