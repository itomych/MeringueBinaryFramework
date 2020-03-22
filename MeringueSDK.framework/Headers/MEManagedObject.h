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

+ (NSFetchRequest<__kindof MEManagedObject *> *)fetchRequest;

+ (nullable __kindof MEManagedObject *)objectWithIdentifier:(NSNumber *)identifier
                                     inManagedObjectContext:(NSManagedObjectContext *)context;
+ (nullable NSArray<__kindof MEManagedObject *> *)allObjects;
+ (BOOL)deleteAllObjects;

@end

NS_ASSUME_NONNULL_END
