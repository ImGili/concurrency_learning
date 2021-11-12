/*
 * @Author: ImGili
 * @Description: 
 */
#include<iostream>
#include<thread>

void hello()
{
    std::cout << "hello!" << std::endl;
}

int main()
{
    std::thread t(hello);
    std::cout << "hello world!" << std::endl;
    t.join();
}
