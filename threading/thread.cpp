#include <iostream>
#include <thread>
#include <unistd.h>
void task1 () {


    std::cout << "streaming task 1";
}

void task2 () {


    std::cout << "streaming task 2";
}

void task3 () {


    std::cout << "streaming task 3";
}



int main() {

  
for (int i = 0; i < 10; i++) {
      std::thread t1(task1);

 std::thread t2(task2);

t2.join();
t1.join();

std::cout << " i is: " << i << '\n';
sleep(2);
}
}