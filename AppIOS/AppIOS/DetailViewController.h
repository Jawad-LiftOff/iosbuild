//
//  DetailViewController.h
//  AppIOS
//
//  Created by Sudheer Ranga on 13/08/15.
//  Copyright (c) 2015 Sudheer Ranga. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

