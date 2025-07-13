#include "gtest/gtest.h"
#include "HelloWorld.h"
#include <sstream>
#include <iostream>

namespace UnitTestHelloWorld
{


    class HelloWorldTest : public ::testing::Test {
    protected:
        HelloWorld hello;
        std::streambuf* orig_buf;
        std::ostringstream out;

        void SetUp() override {
            orig_buf = std::cout.rdbuf(out.rdbuf());
        }

        void TearDown() override {
            std::cout.rdbuf(orig_buf);
        }
    };

    TEST_F(HelloWorldTest, SayHelloPrintsHelloWorld) {
        hello.sayHello();
        std::string output = out.str();
        EXPECT_NE(output.find("Hello from HelloWorld class!"), std::string::npos);
    }

    TEST_F(HelloWorldTest, SayGoodbyePrintsGoodbyeWorld) {
        hello.sayGoodbye();
        std::string output = out.str();
        EXPECT_NE(output.find("Goodbye from HelloWorld class!"), std::string::npos);
    }
}