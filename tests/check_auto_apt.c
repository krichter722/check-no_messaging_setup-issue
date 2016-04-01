
#include <check.h>
#include <stdlib.h>

#define __USE_LARGEFILE64
#define _LARGEFILE_SOURCE
#define _LARGEFILE64_SOURCE

#include <sys/stat.h>

START_TEST(test_execl)
{
        int ret_value = 1;
        ck_assert_int_eq(ret_value, 0);
}
END_TEST

Suite *
auto_apt_suite(void) {
        Suite *s = suite_create("auto-apt");
        TCase *tc_execl = tcase_create("test_execl");
        tcase_add_test(tc_execl, test_execl);
        suite_add_tcase(s, tc_execl);
        return s;
}

/*
int main(void) {
        int number_failed;
        Suite *s = auto_apt_suite();
        SRunner *sr = srunner_create(s);
        srunner_run_all(sr, CK_VERBOSE);
        number_failed = srunner_ntests_failed(sr);
        srunner_free(sr);
        return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
*/

int main(void) {
        ck_assert_int_eq(0, 1);
}
