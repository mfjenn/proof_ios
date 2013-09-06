//
//  ProofData.h
//  proof
//
//  Created by Mary Jenn on 8/8/13.
//  Copyright (c) 2013 catternaut. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ProofData : NSObject

@property (strong) NSString *title;
@property (assign) float rating;

- (id)initWithTitle: (NSString*)title rating:(float)rating;

@end
