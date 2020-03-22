//
//  NSManagedObjectContext+HEDataImport.h
//  meringue
//
//  Created by How Else on 4/17/19.
//  Copyright © 2019 itomych studio. All rights reserved.
//

#import <CoreData/CoreData.h>

NS_ASSUME_NONNULL_BEGIN

@protocol HEMergeable <NSObject>

+ (instancetype)objectWithPrimaryKeyValue:(id)value
           insertIntoManagedObjectContext:(NSManagedObjectContext *)context;

+ (NSFetchRequest<__kindof NSManagedObject<HEMergeable> *> *)fetchRequest;

- (nullable id)valueForPrimaryKey;

- (void)importValuesFromObject:(id)object;

@end

@interface NSManagedObjectContext (HEDataImport)

- (nullable NSArray<__kindof NSManagedObject *> *)he_mergeInObjects:(NSArray<__kindof NSObject *> *)objects
                                                              byKey:(NSString *)key
                                              throughObjectsOfClass:(Class<HEMergeable>)aClass;

@end

NS_ASSUME_NONNULL_END
