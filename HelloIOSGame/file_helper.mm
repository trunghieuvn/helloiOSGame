//
//  file_helper.cpp
//  HelloIOSGame
//
//  Created by Gameloft 2016 on 4/12/16.
//  Copyright © 2016 Gameloft. All rights reserved.
//

#include <stdio.h>
#import <Foundation/Foundation.h>

FILE* getFile(const char* file)
{
    NSString* filePath = [NSString stringWithUTF8String:file];
    
    NSString * path = [[NSBundle mainBundle] pathForResource: [filePath stringByDeletingPathExtension] ofType: [filePath pathExtension]];
    
    FILE *f = fopen([path cStringUsingEncoding:1],"rb");
    
    return f;
}
