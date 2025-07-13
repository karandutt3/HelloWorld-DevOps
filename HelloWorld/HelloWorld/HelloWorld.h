#pragma once

#ifdef HELLOWORLD_EXPORTS
#define HELLOWORLD_API __declspec(dllexport)
#else
#define HELLOWORLD_API __declspec(dllimport)
#endif
class HelloWorld
{
public:
    HelloWorld() = default;
    ~HelloWorld() = default;
    HELLOWORLD_API void sayHello() const;
    HELLOWORLD_API void sayGoodbye() const;
};

