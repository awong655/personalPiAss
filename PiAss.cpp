//
//  PiAss.cpp
//  
//
//  Created by Anthony Wong on 2018-11-07.
//
//

#include "PiAss.hpp"
using namespace std;

int main(){
    cout << "Starting piAss\n" << endl;
    int fd[2];
    pid_t pid;
    string res;
    
    if (pipe(fd) < 0){
        perror("fatal error");
        exit(1);
    }
    
    pid = fork();
    if (pid < 0) {
        perror("fork error");
        exit(-1);
    }
    if(pid > 0){
        
    }else{
        
    }
    
}

