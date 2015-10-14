//
//  SPPDetailViewController.h
//  SteamPunkPostsViewer
//
//  Created by Elias Tihonkov on 14.10.15.
//  Copyright (c) 2015 Tykhonkov Ilya. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SPPDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
