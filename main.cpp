#include <iostream>
#include <queue>
#include <string>

// Queue is fifo data structure, it means first in first serve.

void printQueue(std::queue<int> q)
{
    while (!q.empty())
    {
        std::cout << q.front() << std::endl;
        q.pop();
    }
}

void addTask (std::string addingTask, std::queue<std::string>);
void removeTask (std::string removingTask, std::queue<std::string>);


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
    std::cout << "******************************************************" << std::endl;
    std::queue<std::string> dailyTasks;

    
    return 0;
}

void addTask (std::string addingTask, std::queue<std::string> tasks)
{
    tasks.push(addingTask);
    std::cout << "You added the task: " << addingTask <<" successfully!" <<std::endl;
    std::cout << "You have " << tasks.size() << " tasks left!" << std::endl;
}

void removeTask ( std::queue<std::string> tasks)
{
    std::cout << "You removed the task: " << tasks.front() << std::endl;
    tasks.pop();
    if(tasks.empty())
    {
        std::cout << "The tasks are done!" << std::endl;
    }
}