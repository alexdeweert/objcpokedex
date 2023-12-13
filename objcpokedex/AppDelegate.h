//
//  AppDelegate.h
//  objcpokedex
//
//  Created by Alex Deweert on 2023-12-13.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

