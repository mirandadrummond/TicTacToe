//
// Created by Miranda Drummond on 11/10/2023.
//

#include <stdio.h>
#include <CUnit/Basic.h>
#include "tictactoe.h"

int init_suite(void);
int clean_suite(void);
void test_addition(void);

int init_suite(void) {
    return 0;
}

int clean_suite(void) {
    return 0;
}

// Test case function
void test_function(void) {
    CU_ASSERT_EQUAL(add(2,3), 5);
    CU_ASSERT_EQUAL(add(-1,1), 1);
    CU_ASSERT_EQUAL(add(0,0), 0);
}


int main() {

    // Initialise the CUnit test registry
    CU_initialize_registry();

    // Add a suite to the registry
    CU_pSuite suite = CU_add_suite("Suite Name", init_suite, clean_suite);

    // Add the test cases to the suite
    CU_add_test(suite, "test_function", test_function);

    // Run the tests
    CU_basic_run_tests();

    // Display test results
    CU_cleanup_registry();

    return CU_get_error();
}
