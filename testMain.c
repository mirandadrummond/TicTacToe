//
// Created by Miranda Drummond on 11/10/2023.
//

#include <CUnit/Basic.h>
#include "tictactoe.h"

int init_suite(void);
int clean_suite(void);

int init_suite(void) {
    return 0;
}

int clean_suite(void) {
    return 0;
}

void test_checkWin() {
    char board1[3][3] = {
            {'X', 'X', 'X'},
            {'O', '4', 'O'},
            {'O', '8', '9'}
    };
    CU_ASSERT_TRUE(checkWin(board1, 'X'));  // Player X has a winning row

    char board2[3][3] = {
            {'X', 'O', 'X'},
            {'O', 'O', 'O'},
            {'X', '8', '9'}
    };
    CU_ASSERT_TRUE(checkWin(board2, 'O'));  // Player O has a winning row

    char board3[3][3] = {
            {'O', 'O', 'X'},
            {'O', 'O', 'X'},
            {'X', '8', 'O'}
    };
    CU_ASSERT_FALSE(checkWin(board2, 'X'));  // Player O has a winning row, not player X
}

void test_isValidMove() {
    char board[3][3] = {
            {'X', 'O', '3'},
            {'4', '5', '6'},
            {'7', '8', '9'}
    };
    CU_ASSERT_FALSE(isValidMove(board, 0, 0)); // Cell is already occupied
    CU_ASSERT_FALSE(isValidMove(board, 3, 3)); // Out of grid boundaries
    CU_ASSERT_TRUE(isValidMove(board, 2, 2));  // Valid move
}

void test_isDraw() {
    char board1[3][3] = {
            {'X', 'O', 'X'},
            {'O', 'X', 'O'},
            {'O', 'X', 'X'}
    };
    CU_ASSERT_TRUE(isDraw(board1));  // It's a draw

    char board2[3][3] = {
            {'1', 'O', 'X'},
            {'O', 'X', 'O'},
            {'O', 'X', 'X'}
    };
    CU_ASSERT_FALSE(isDraw(board2));  // Game is still ongoing
}

int main() {
    // Initialise the CUnit test registry
    CU_initialize_registry();

    // Add a suite to the registry
    CU_pSuite suite = CU_add_suite("Suite Name", init_suite, clean_suite);

    // Add the test cases to the suite
    CU_add_test(suite, "test_checkWin", test_checkWin);
    CU_add_test(suite, "test_isValidMove", test_isValidMove);
    CU_add_test(suite, "test_isDraw", test_isDraw);

    // Run the tests
    CU_basic_run_tests();

    // Display test results
    CU_cleanup_registry();

    return CU_get_error();
}
