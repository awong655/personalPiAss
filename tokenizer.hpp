//
//  tokenizer.hpp
//  
//
//  Created by Anthony Wong on 2018-11-19.
//
//

#ifndef tokenizer_hpp
#define tokenizer_hpp

#include <stdio.h>
#include <iostream.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <errno.h>
#include <string>
#include <sstream>
#include <vector>

class TokenizerClass{
public:
    static void tokenize(std::string);
    
};

#endif /* tokenizer_hpp */
