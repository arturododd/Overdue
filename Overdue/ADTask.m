//
//  ADTask.m
//  Overdue
//
//  Created by Arturo Dodd Vaudrecourt on 11/5/14.
//  Copyright (c) 2014 Dodd.mx. All rights reserved.
//

#import "ADTask.h"

@implementation ADTask

-(id)initWithData:(NSDictionary *)data
{
    self = [super init];
    
    if (self) {
        self.title = data[TASK_TITLE];
        self.description = data[TASK_DESCRIPTION];
        self.date = data[TASK_DATE];
        self.isCompleted = [data[TASK_COMPLETION] boolValue];
    }
    
    return self;
}

-(id)init
{
    self = [self initWithData:nil];
    return self;
}

@end
