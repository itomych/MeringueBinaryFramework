//
//  MEManagedObject.h
//  meringue
//
//  Created by Valery Shilo on 1/5/16.
//  Copyright © 2016 itomych studio. All rights reserved.
//

#import <CoreData/CoreData.h>
#import "MENetworking.h"

NS_ASSUME_NONNULL_BEGIN
@interface MEManagedObject : NSManagedObject <MENetworking>
    
/**
 Generates fetch request for meringue's entity
     
 @return configured fetch request
 */
+ (NSFetchRequest<__kindof MEManagedObject *> *)fetchRequest;
    
/**
 Executes fetch request using predicate with object identifier
     
 @param identifier identifier of the object to be fetched
 @param context context to fetch into
 @return managed object
 */
+ (nullable __kindof MEManagedObject *)objectWithIdentifier:(NSNumber *)identifier
                                     inManagedObjectContext:(NSManagedObjectContext *)context;
/**
 Executes entitie's fetch request
     
 @return array with fetched managed objects
 */
    
+ (nullable NSArray<__kindof MEManagedObject *> *)allObjects;
    
/**
 Delete all fetched managed objects
     
 @return result of deleting operation (success or failure)
 */
    
+ (BOOL)deleteAllObjects;

@end

NS_ASSUME_NONNULL_END
