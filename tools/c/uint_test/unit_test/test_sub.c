#include "check.h"
#include "unit_test.h"
#include "sub.h"

START_TEST(test_sub)
{
    fail_unless(sub(6, 2) == 4, "error, 6 - 2 != 4");
}
END_TEST

Suite * make_sub_suite(void)
{
    Suite *s = suite_create("sub");       // 建立Suite
    TCase *tc_sub = tcase_create("sub");
    // 建立测试用例集
    suite_add_tcase(s, tc_sub);
    // 将测试用例加到Suite中
    tcase_add_test(tc_sub, test_sub);
    // 测试用例加到测试集中
    return s;
}


