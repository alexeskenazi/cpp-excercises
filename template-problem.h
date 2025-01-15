#pragma once
#include <string>
#include <stack>
#include <iostream>
using namespace std;


class TemplateProblem {
    public:
        
        void someKindOfFunction(char* str) {
            unsigned int len = 0;
            char* end = str;
            while (*end)
            {
                len++;
                end++;
            }
            std::cout << "len: " << len << std::endl;
            std::cout << "end: " << end << std::endl;
            std::cout << "end-str: " << (end-str) << std::endl;
            
            
        }

        void checks() {
            char str1[] = "hello";
            someKindOfFunction(str1);
            // std::cout << "Reversed 'hello': " << str1 << std::endl;

            char str2[] = "world";
            someKindOfFunction(str2);
            // std::cout << "Reversed 'world': " << str2 << std::endl;

            char str3[] = "a";
            someKindOfFunction(str3);
            // std::cout << "Reversed 'a': " << str3 << std::endl;

            char str4[] = "";
            someKindOfFunction(str4);
            // std::cout << "Reversed '': " << str4 << std::endl;
        }
};