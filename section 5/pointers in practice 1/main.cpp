#include <iostream>

using namespace std;

struct task{
    task *pNext;
    string description;
};

int main(){
    task item;
    item.description = "do something";

    task *pTask = new task;
    pTask->description = "do something";
    //after using the object you can delete by :
    delete pTask;
}