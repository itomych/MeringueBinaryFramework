//
//  MECoreDataStack.h
//  meringue
//
//  Created by How Else on 5/6/15.
//  Copyright (c) 2015 itomych studio. All rights reserved.
//

#import "MEPersistentContainer.h"

NS_ASSUME_NONNULL_BEGIN

__attribute__((objc_subclassing_restricted))
@interface MECoreDataStack : MEPersistentContainer

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
    
/**
 Initializes shared instance of MECoreDataStack
     
 @return instance of MECoreDataStack to be used with meringue data base
 */
+ (instancetype)defaultCoreDataStack;

@end

NS_ASSUME_NONNULL_END
