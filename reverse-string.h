#pragma once
#include <string>
#include <stack>
#include <iostream>
using namespace std;


class ReverseString {
    public:
        
        void reverse(char* str) {
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
            reverse(str1);
            std::cout << "Reversed 'hello': " << str1 << std::endl;

            char str2[] = "world";
            reverse(str2);
            std::cout << "Reversed 'world': " << str2 << std::endl;

            char str3[] = "a";
            reverse(str3);
            std::cout << "Reversed 'a': " << str3 << std::endl;

            char str4[] = "";
            reverse(str4);
            std::cout << "Reversed '': " << str4 << std::endl;
        }
};