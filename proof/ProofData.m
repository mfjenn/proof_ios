//
//  ProofData.m
//  proof
//
//  Created by Mary Jenn on 8/8/13.
//  Copyright (c) 2013 catternaut. All rights reserved.
//

#import "ProofData.h"

@implementation ProofData

@synthesize title = title;
@synthesize rating = rating;

- (id)initWithTitle:(NSString *)title rating:(float)rating{
    if ((self = [super init])){
        self.title = title;
        self.rating = rating;
    }
    return self;
}

@end
