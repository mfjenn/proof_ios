//
//  ProofDoc.h
//  proof
//
//  Created by Mary Jenn on 8/8/13.
//  Copyright (c) 2013 catternaut. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ProofData;
@interface ProofDoc : NSObject

@property (strong) ProofData *data;
@property (strong) UIImage *thumbImage;
@property (strong) UIImage *fullImage;

- (id)initWithTitle:(NSString*)title rating:(float)rating thumbImage:(UIImage *)thumbImage fullImage: (UIImage *)fullImage;

@end
