#include "gtest/gtest.h"
#include "next_square.hpp"
#include <tuple>

// TEST(NextSquare,findNextSquareTest1){
//     EXPECT_EQ(findNextSquare(121),147);
//     EXPECT_EQ(findNextSquare(121),149);

// }





class NextSquare : public ::testing::TestWithParam<std::tuple<long int, long int>> {
};

TEST_P(NextSquare, findNextSquareTest) {
    long long int number = std::get<0>(GetParam());
    long long int expected_result = std::get<1>(GetParam());
    EXPECT_EQ(findNextSquare(number), expected_result);
}


INSTANTIATE_TEST_SUITE_P(
    NextSquareTest,
    NextSquare,
    ::testing::Values(
        std::make_tuple(121, 144),
        std::make_tuple(625, 676),
        std::make_tuple(319225, 320356),
        std::make_tuple(15241383936, 15241630849),
        std::make_tuple(155, -1)
    )
);