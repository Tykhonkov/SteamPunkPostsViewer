//
//  SPPMasterViewController.h
//  SteamPunkPostsViewer
//
//  Created by Elias Tihonkov on 14.10.15.
//  Copyright (c) 2015 Tykhonkov Ilya. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface SPPMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
