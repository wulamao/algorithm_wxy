#include "check.h"
#include "uni_test.h"
#include "add.h"
START_TEST(test_add)
{
    fail_unless(add(2, 3) == 5, "error, 2 + 3 != 5"); // "error, 2 + 3 != 5"是出错提示信息
}
END_TEST

Suite * make_add_suite(void)
{
    Suite *s = suite_create("add");       // 建立Suite
    TCase *tc_add = tcase_create("add");  // 建立测试用例集
    suite_add_tcase(s, tc_add);           // 将测试用例加到Suite中
    tcase_add_test(tc_add, test_add);     // 测试用例加到测试集中
    return s;
}


