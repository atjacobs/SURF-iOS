//
//  AJAppDelegate.h
//  SURF iOS
//
//  Created by Alexander Jacobs on 8/20/13.
//  Copyright (c) 2013 Alexander Jacobs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AJAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
