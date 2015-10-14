//
//  SPPAppDelegate.h
//  SteamPunkPostsViewer
//
//  Created by Elias Tihonkov on 14.10.15.
//  Copyright (c) 2015 Tykhonkov Ilya. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SPPAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
