#include <iostream>
#include <queue>

// Queue is fifo data structure, it means first in first serve.

void printQueue(std::queue<int> q)
{
    while (!q.empty())
    {
        std::cout << q.front() << std::endl;
        q.pop();
    }
}

int main()
{
    std::queue<int> myqueue;
    myqueue.push(1);
    myqueue.push(2);
    myqueue.push(3);

    std::cout << "size: " << myqueue.size() << std::endl;
    std::cout << "front: " << myqueue.front() << std::endl;
    std::cout << "back: " << myqueue.back() << std::endl;

    printQueue(myqueue);
    
    return 0;
}
