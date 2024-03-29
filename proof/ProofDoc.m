//
//  ProofDoc.m
//  proof
//
//  Created by Mary Jenn on 8/8/13.
//  Copyright (c) 2013 catternaut. All rights reserved.
//

#import "ProofDoc.h"
#import "ProofData.h"

@implementation ProofDoc
@synthesize data = data;
@synthesize thumbImage = _thumbImage;
@synthesize fullImage = _fullImage;

- (id)initWithTitle:(NSString *)title rating:(float)rating thumbImage:(UIImage *)thumbImage fullImage: (UIImage *)fullImage {
    if ((self = [super init])) {
        self.data = [[ProofData alloc] initWithTitle:title rating:rating];
        self.thumbImage = thumbImage;
        self.fullImage = fullImage;
    }
    return self; 
}

@end
