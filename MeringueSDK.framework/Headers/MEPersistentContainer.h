//
//  MEPersistentContainer.h
//  meringue
//
//  Created by How Else on 3/28/19.
//  Copyright © 2019 itomych studio. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

NS_ASSUME_NONNULL_BEGIN

@interface MEPersistentContainer : NSObject

+ (NSURL *)defaultDirectoryURL;

@property (nonatomic, copy, readonly) NSString *name;
@property (nonatomic, strong, readonly) NSManagedObjectContext *viewContext;
@property (nonatomic, strong, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, strong, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

// Creates a container using the model named `name` in the main bundle
- (instancetype)initWithName:(NSString *)name;
- (instancetype)initWithName:(NSString *)name
          managedObjectModel:(NSManagedObjectModel *)model NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;

- (void)loadPersistentStoreWithCompletionHandler:(void (^)(NSPersistentStore * _Nullable, NSError * _Nullable))block;

- (NSManagedObjectContext *)newBackgroundContext;

- (NSManagedObjectContext *)newBackgroundContextWithMergePolicy:(NSMergePolicy*)policy;

@end

NS_ASSUME_NONNULL_END
