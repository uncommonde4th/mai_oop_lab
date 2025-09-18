#include <gtest/gtest.h>
#include "../include/str_processor.h"

TEST(StrProcessorTest, NoDigits) {
    EXPECT_EQ(str_processor("qwertYYY"), "Строка не содержит цифр");
}

TEST(StrProcessorTest, WithDigits) {
    EXPECT_EQ(str_processor("abc123def"), "123");
    EXPECT_EQ(str_processor("qwe9r8ty765qw4321er6842ty"), "9876543216842");
}

TEST(StrProcessorTest, OnlyDigits) {
    EXPECT_EQ(str_processor("12345"), "12345");
}

TEST(StrProcessorTest, EmptyString) {
    EXPECT_EQ(str_processor(""), "Строка не содержит цифр");
}
