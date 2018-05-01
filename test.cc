 #include "gtest/gtest.h"
 #include "main.pp"
 TEST (counter, test1){
    
    EXPECT_EQ(3, countLines("test2.txt"));
    
}

    TEST (counter, test2){
    EXPECT_EQ(4, countLines("test1.txt"));
    
}

    TEST (counter, test3){
    
    EXPECT_EQ(5, countLines("test3.txt"));
}
