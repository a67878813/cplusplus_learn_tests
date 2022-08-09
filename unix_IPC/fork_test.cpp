#include <unistd.h>
#include <iostream>

int main(){
    pid_t fpid;
    int count =0;
    fpid = fork();
    if(fpid<0)
        std::cout << "error in fork!" << std::endl;
    else if (fpid ==0)
    {
        std::cout << "i am the child process, "
        << getpid()
        << std::endl;
        count++;
    }
    else
    {
        std::cout << "i am the parent process id is"
        << getpid()
        << std::endl;
        count++;
    }
    std::cout << "count is "<< count << std::endl;
    return 0;
}