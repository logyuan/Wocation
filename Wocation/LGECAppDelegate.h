//
//  LGECAppDelegate.h
//  Wocation
//
//  Created by CHIH YUAN CHEN on 13/6/8.
//  Copyright (c) 2013年 CHIH YUAN CHEN. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FacebookSDK/FacebookSDK.h>
#import "LGECFBLoginViewController.h"

@interface LGECAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
- (void)openSession;
- (void)saveContext;

- (NSURL *)applicationDocumentsDirectory;

@end
