//
//  ProofDetailViewController.h
//  proof
//
//  Created by Mary Jenn on 8/8/13.
//  Copyright (c) 2013 catternaut. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ProofDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
